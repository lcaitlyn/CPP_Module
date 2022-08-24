/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drayl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:11:07 by drayl             #+#    #+#             */
/*   Updated: 2022/03/28 13:11:09 by drayl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arr, unsigned int len, void (*func)(T)) {
    for (unsigned int i = 0; i < len; ++i) {
        func(arr[i]);
    }
}

#endif
