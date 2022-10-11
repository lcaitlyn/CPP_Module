#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>

void	printChar(char c, double d)
{
	if (std::isnan(d) || std::isinf(d))
		std::cout << "char: impossible" << std::endl;	
	else if (d < 32 || d > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
}

void	printInt(int i, double d)
{
	if (std::isnan(d) || std::isinf(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void	printFloat(int i, float f)
{
	if (f - i == 0)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;	
}

void	printDouble(int i, double d)
{
	if (d - i == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;	
}

int	main(int ac, char **av)
{
	char	c = 0;
	int		i = 0;
	float	f = 0;
	double	d = 0;
	char *end;
	
	if (ac == 2)
	{
		std::string str;
		str = av[1];
		d = std::strtod(av[1], &end);
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<float>(d);
		printChar(c, d);
		printInt(i, d);
		printFloat(i, f);
		printDouble(i, d);
		return (0);
	}
	std::cerr << "./convert ARG\n";
	return (1);
}