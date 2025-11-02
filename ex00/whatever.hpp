/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:17:24 by mdahani           #+#    #+#             */
/*   Updated: 2025/11/02 11:28:54 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// * Includes
#include <iostream>

// * Functions
template<typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T max(T &a, T &b) {
    if (a == b){
        return b;
    }
    if (a > b){
        return a;
    } else {
        return b;
    }
}

template<typename T>
T min(T &a, T &b){
    if (a == b){
        return b;
    }
    if (a < b){
        return a;
    } else {
        return b;
    }
}

#endif