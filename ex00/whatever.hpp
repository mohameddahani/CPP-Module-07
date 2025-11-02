/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:17:24 by mdahani           #+#    #+#             */
/*   Updated: 2025/11/02 09:23:59 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// * Includes
#include <iostream>

// * Class With Orthodox Canonical Form
class Whatever {
    // ! private
    private:

    // ! public
    public:
        // * Default constructor
        Whatever();

        // * Copy constructor
        Whatever(const Whatever &other);

        // * Copy assignment operator
        Whatever &operator=(const Whatever &other);

        // * Destructor
        ~Whatever();

        // * Setters & Getters
        
        // * Methods
};

#endif