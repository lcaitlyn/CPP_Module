/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drayl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:10:31 by drayl             #+#    #+#             */
/*   Updated: 2022/03/28 13:19:04 by drayl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Array.hpp"

class Element {
public:
    int s;

    Element() { s = 10; }
    ~Element() {}
};

int main() {
    Array<int> arr;
    std::cout << "arr size = " << arr.size() << std::endl;
    try {
        std::cout << arr[0] << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    Array<int> arr1(10);
    std::cout << "arr1 size = " << arr1.size() << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "arr1[" << i << "] = " << arr1[i] << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << arr1[10] << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout << arr1[-1] << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < 10; ++i) {
        arr1[i] = i;
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << "arr1[" << i << "] = " << arr1[i] << std::endl;
    }
    std::cout << std::endl;

    Array<Element> arr2(10);
    std::cout << "arr2 size = " << arr2.size() << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "arr2[" << i << "] = " << arr2[i].s << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << arr2[10].s << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout << arr2[-1].s << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < 10; ++i) {
        arr2[i].s = i;
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << "arr2[" << i << "] = " << arr2[i].s << std::endl;
    }
    std::cout << std::endl;
}
