#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>

struct Data {
	std::string name;
	int			data;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int	main() {
	Data a = { 
		"name",
		4
	};

	std::cout << a.data << std::endl;

	uintptr_t ptr = serialize(&a);
	Data *b = deserialize(ptr);

	std::cout << b->data << std::endl;

	return 0;
}