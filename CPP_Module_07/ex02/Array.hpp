#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
private:
	T *arr;
	int sizeArr;
public:
	Array() : arr(new T(0)), sizeArr(0) { };

	Array(const unsigned int sizeArr) : arr(new T[sizeArr]()), sizeArr(sizeArr) { };

	Array(const Array & array) : arr(new T[array.sizeArr]()), sizeArr(array.sizeArr) {
		for (int i = 0; i < sizeArr; i++) {
			arr[i] = array.arr[i];
		}
	};

	Array &operator=(const Array & array) {
		if (this != &array) {
			sizeArr = array.sizeArr;
			arr = new T[sizeArr]();
			
			for (int i = 0; i < sizeArr; i++) {
				arr[i] = array.arr[i];
			}
		}
		return *this;
	}

	T &operator[](int i) {
		if (i < 0 || i >= sizeArr)
			throw ArrayIndexOutOfBoundsException();
		return arr[i];
	}

	unsigned int size() { return sizeArr; }

	~Array() {};

	class ArrayIndexOutOfBoundsException : public std::exception {
	public:
		const char * what() const throw() {
			return "ArrayIndexOutOfBoundsException";
		}
	};
};

#endif