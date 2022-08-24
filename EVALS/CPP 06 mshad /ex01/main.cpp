#include "serialize.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *A = new Data;
	A->a = 9;
	A->f = 7.5f;
	A->str = "hello";
	std::cout << "Adress A = " << A << std::endl;
	std::cout << "A: a = " << A->a << ", f = " << A->f << ", str = " << A->str << std::endl
			  << std::endl;

	uintptr_t tmp_ptr = serialize(A);
	std::cout << "tmp_ptr = " << tmp_ptr << std::endl;
	std::cout << "&tmp_ptr = " << &tmp_ptr << std::endl
			  << std::endl;

	Data *B = deserialize(tmp_ptr);
	std::cout << "Adress B = " << B << std::endl;
	std::cout << "B: a = " << B->a << ", f = " << B->f << ", str = " << B->str << std::endl;

	delete A;
}
