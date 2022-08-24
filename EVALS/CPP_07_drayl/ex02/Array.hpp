/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drayl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:10:36 by drayl             #+#    #+#             */
/*   Updated: 2022/03/28 13:10:38 by drayl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
private:
    unsigned int _size;
    T *_array;
public:
    //   --- Constructor/Destructor ---   //
    Array<T>() {
        _size = 0;
        _array = nullptr;
    }

    Array<T>(unsigned int size) : _size(size) {
        _array = new T[size];
        for (unsigned int i = 0; i < size; ++i) {
            _array[i] = T();
        }
    }

    ~Array<T>() { delete[] _array; }

    Array<T>(const Array<T> &array) : _size(array._size) { *this = array; }

    //   --- Override operators ---   //
    Array &operator=(const Array<T> &array) {
        _size = array._size;
        for (unsigned int i = 0; i < _size; ++i) {
            _array[i] = array._array[i];
        }
    }

    T &operator[](unsigned int index) {
        if (index >= _size)
            throw std::exception();
        return (_array[index]);
    }

    //   --- Getters ---   //
    unsigned int size() { return (_size); }
};

#endif
