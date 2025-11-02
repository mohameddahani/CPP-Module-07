/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:17:14 by mdahani           #+#    #+#             */
/*   Updated: 2025/11/02 09:24:20 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor
Whatever::Whatever(){
    std::cout << "Default constructor of Whatever is called" << std::endl;
}

// * Copy constructor with initializer list
Whatever::Whatever(const Whatever &other){
    std::cout << "Copy constructor of Whatever is called" << std::endl;
}

// * Copy assignment operator
Whatever &Whatever::operator=(const Whatever &other){
    std::cout << "Copy assignment operator of Whatever is called" << std::endl;
    
    return *this;
}

// * Destructor
Whatever::~Whatever(){
    std::cout << "Whatever is destroyed" << std::endl;
}

// * Setters & Getters

// * Methods
