/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:56:25 by mdahani           #+#    #+#             */
/*   Updated: 2025/11/04 08:46:47 by mdahani          ###   ########.fr       */
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

        // * Setters & Getters
        void setValueByIndex(T value, unsigned int idx){
            if (idx > this->sizeOfArray || idx  < 0){
                throw std::out_of_range("Index out of range");
            }
            
            this->arr[idx] = value;
        }

        T getValueByIndex(unsigned int idx){
            if (idx > this->sizeOfArray || idx  < 0){
                throw std::out_of_range("Index out of range");
            }
            return this->arr[idx];
        }
        void *getAddressByIndex(unsigned int idx){
            if (idx > this->sizeOfArray || idx  < 0){
                throw std::out_of_range("Index out of range");
            }
            return &this->arr[idx];
        }

        // * Methods
        unsigned int size() const{
            return this->sizeOfArray;
        }
};

#endif
