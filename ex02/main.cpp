/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:56:12 by mdahani           #+#    #+#             */
/*   Updated: 2025/11/02 17:53:24 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void ft_strjoin(T &value){
    value += 64;
}

template<typename T>
void ft_strjoin(const T &value){
    (void)value;
}

int main(){
    const unsigned int len = 10;
    std::string arr[len];
    const std::string arr2[len] = {"hello ", "hello ", "hello ", "hello ", "hello ", "hello ", "hello ", "hello ", "hello ", "hello "};

    for (unsigned int i = 0; i < len; i++){
        arr[i] = "hello ";
    }
    

    ::iter(arr, len, ft_strjoin);
    
    ::iter(arr2, len, ft_strjoin);

    
    for (unsigned int i = 0; i < len; i++){
        std::cout << arr[i] << std::endl;
    }
    
    for (unsigned int i = 0; i < len; i++){
        std::cout << arr2[i] << std::endl;
    }
}