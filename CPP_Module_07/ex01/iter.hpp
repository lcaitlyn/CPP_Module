#include <iostream>

template <typename T>
void iter(T *a, int lenght, void (&func)(T)) {
	for (int i = 0; i < lenght; i++) {
		func(a[i]);
	}
}

template <typename T>
void printer(T t) {
	std::cout << t << std::endl;
}

