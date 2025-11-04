/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:56:12 by mdahani           #+#    #+#             */
/*   Updated: 2025/11/04 08:47:36 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    try {
        Array<int> a(10);
        a.setValueByIndex(10, 0);
        std::cout << a.getValueByIndex(0) << std::endl;
        // std::cout << a.getValueByIndex(100) << std::endl;


        
        Array<std::string> b(10);
        b.setValueByIndex("hello", 0);
        std::cout << b.getValueByIndex(0) << std::endl;
        // std::cout << b.getValueByIndex(100) << std::endl;

        Array<std::string> c(2);
        c.setValueByIndex("world", 0);
        std::cout << c.getValueByIndex(0) << std::endl;
        // std::cout << b.getValueByIndex(100) << std::endl;

        b = c;
        
        std::cout << b.getValueByIndex(0) << std::endl;
        
        std::cout << b.getAddressByIndex(0) << std::endl;
        std::cout << c.getAddressByIndex(0) << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    
}