#include "Scalar.hpp"

Scalar::Scalar(void)
{
	str = "No_argument";
	type = "null";
	flag = 0;
	ch = 0;
	num = 0;
	f = 0;
	d = 0;
}

Scalar::Scalar(std::string argument)
{
	str = argument;
	type = "null";
	flag = 0;
	ch = 0;
	num = 0;
	f = 0;
	d = 0;
}

Scalar::~Scalar(void) {}

Scalar::Scalar(const Scalar &other)
{
	*this = other;
}

Scalar &Scalar::operator=(const Scalar &other)
{
	this->str = other.str;
	this->type = other.type;
	this->flag = other.flag;
	this->ch = other.ch;
	this->num = other.num;
	this->f = other.f;
	this->d = other.d;
	return *this;
}

void Scalar::setFlag(void)
{
	if (!str.compare("nan") || !str.compare("inf") || !str.compare("-inf") || !str.compare("+inf"))
		flag = 1;
	else if (!str.compare("nanf") || !str.compare("inff") || !str.compare("-inff") || !str.compare("+inff"))
		flag = 2;
}

static std::string parserType(std::string str, int flag)
{
	int i = 0;
	int len = (int)str.length();
	if (str.length() == 1 && !isdigit(str[0]))
		return "char";
	if (flag == 1)
		return "double";
	if (flag == 2)
		return "float";
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < len && isdigit(str[i]))
		i++;
	if (i == len)
		return "int";
	if (str[i] && str[i] == '.')
	{
		i++;
		if (i == len)
			return "null";
		while (i < len && isdigit(str[i]))
			i++;
		if (i == len)
			return "double";
		if (str[i] && str[i] == 'f' && i + 1 == len && str[i - 1] != '.')
			return "float";
	}
	else if (str[i] && str[i] == 'f' && i == len)
		return "float";
	return "null";
}

void Scalar::foundType(void)
{
	setFlag();
	type = parserType(str, flag);
}

void Scalar::Conversion(void)
{
	if (!type.compare("char"))
	{
		ch = str[0];
		num = static_cast<int>(ch);
		f = static_cast<float>(ch);
		d = static_cast<double>(ch);
	}
	else if (!type.compare("int"))
	{
		if (str.length() > 11 || (atol(str.c_str()) > INT_MAX || atol(str.c_str()) < INT_MIN))
			throw UndefinedBehavior();
		num = atoi(str.c_str());
		ch = (num < 0 || num >= 127) ? -1 : static_cast<char>(num);
		f = static_cast<float>(num);
		d = static_cast<double>(num);
	}
	else if (!type.compare("float"))
	{
		f = atof(str.c_str());
		d = static_cast<double>(f);
		num = static_cast<int>(f);
		ch = (num < 0 || num >= 127) ? -1 : static_cast<char>(num);
	}
	else if (!type.compare("double"))
	{
		d = atof(str.c_str());
		f = static_cast<float>(d);
		num = static_cast<int>(d);
		ch = (num < 0 || num >= 127) ? -1 : static_cast<char>(num);
	}
	else
		throw UndefinedBehavior();
}

void Scalar::printInfoConversion(void)
{
	Conversion();
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void Scalar::printChar(void)
{
	std::cout << "char: ";
	if (ch > 32 && ch < 127)
		std::cout << "'" << ch << "'" << std::endl;
	else if (ch >= 0 && ch <= 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void Scalar::printInt(void)
{
	std::cout << "int: ";
	if (flag || f > INT_MAX || d > INT_MAX || f < INT_MIN || d < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << num << std::endl;
}

void Scalar::printFloat(void)
{
	std::cout << "float: ";
	if (static_cast<int>(f) == f)
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;
}

void Scalar::printDouble(void)
{
	std::cout << "double: ";
	if (static_cast<int>(d) == d)
		std::cout << d << ".0" << std::endl;
	else
		std::cout << d << std::endl;
}

const char *Scalar::UndefinedBehavior::what() const throw()
{
	return "The type conversion is impossible";
}
