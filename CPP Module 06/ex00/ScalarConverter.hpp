/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:53:18 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/09 17:53:19 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>

class ScalarConverter
{
    public:

        static void convert(std::string);

        ScalarConverter();
        ScalarConverter(const std::string &);
        ScalarConverter(const ScalarConverter &);
        ~ScalarConverter();

        ScalarConverter &operator=(const ScalarConverter &);
};