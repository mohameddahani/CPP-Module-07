/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:56:25 by mdahani           #+#    #+#             */
/*   Updated: 2025/11/02 17:48:25 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

// * Includes
#include <iostream>

// * Functions
template<typename T>
void iter(T *arr, const unsigned int &len, void (*ptrFunc)(T &value)){
    for (unsigned int i = 0; i < len; i++){
        ptrFunc(arr[i]);
    }
}

template<typename T>
void iter(const T *arr, const unsigned int &len, void (*ptrFunc)(const T &value)){
    for (unsigned int i = 0; i < len; i++){
        ptrFunc(arr[i]);
    }
}

#endif
