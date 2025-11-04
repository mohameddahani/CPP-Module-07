/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:56:25 by mdahani           #+#    #+#             */
/*   Updated: 2025/11/04 09:42:44 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

// * Includes
#include <iostream>

// * Template
template<typename T>

// * Class With Orthodox Canonical Form
class Array {
    // ! private
    private:
        T *arr;
        unsigned int sizeOfArray;

    // ! public
    public:
        // * Default constructor
        Array(): sizeOfArray(0){
            this->arr = NULL;

            std::cout << "Default constructor of Array is called" << std::endl;
        };

        // * Parametrised constructor
        Array(unsigned int sizeArray): sizeOfArray(sizeArray){
            // ? T[sizeArray]() means:
            // ? Dynamically allocate an array of 'sizeArray' elements of type T,
            // ? and value-initialize each element:
            // ?   - For built-in types (int, double, etc.), elements are set to 0.
            // ?   - For class types, the default constructor is called.
            // ? Without the parentheses (), elements would be left uninitialized (garbage value).

            this->arr = new T[sizeArray]();

            std::cout << "Parametrised constructor of Array is called" << std::endl;
        };

        // * Copy constructor
        Array(const Array &other){
            // ! deep copy
            // * call copy assignment
            *this = other;
            
            std::cout << "Copy constructor of Array is called" << std::endl;
        };

        // * Copy assignment operator
        Array &operator=(const Array &other){
            if (this != &other){
                // ! deep copy
                delete []arr;
                this->sizeOfArray = other.sizeOfArray;
                this->arr = new T[this->sizeOfArray];

                for (unsigned int i = 0; i < this->sizeOfArray; i++){
                    arr[i] = other.arr[i];
                }
            }
            
            std::cout << "Copy assignment operator of Array is called" << std::endl;

            return *this;
        };

        // * Destructor
        ~Array(){
            // ! free all allocation memory
            delete []this->arr;

            std::cout << "Array is destroyed" << std::endl;
        };

        // * Methods
        unsigned int size() const{
            return this->sizeOfArray;
        }

        // * Operators
        T &operator[](unsigned int idx){
            if (idx > this->sizeOfArray || idx  < 0){
                throw std::out_of_range("Index out of range");
            }
            
            return this->arr[idx];
        }
        
        const T &operator[](unsigned int idx) const {
            if (idx > this->sizeOfArray || idx  < 0){
                throw std::out_of_range("Index out of range");
            }
            
            return this->arr[idx];
        }
        
};

#endif
