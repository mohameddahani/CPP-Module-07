/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:56:12 by mdahani           #+#    #+#             */
/*   Updated: 2025/11/04 09:39:12 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    try {
        const Array<int> x(10);
        std::cout << x[0] << std::endl;

        Array<int> a(10);
        a[0] = 10;
        std::cout << a[0] << std::endl;
        // std::cout << a[100] << std::endl;


        
        Array<std::string> b(10);
        b[0] = "hello";
        std::cout << b[0] << std::endl;
        // std::cout << b[100] << std::endl;

        Array<std::string> c(2);
        c[0] = "world!";
        std::cout << c[0] << std::endl;
        // std::cout << c[100] << std::endl;

        b = c;
        
        std::cout << b[0] << std::endl;
        
        // std::cout << &b[0] << std::endl;
        // std::cout << &c[0] << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    
}