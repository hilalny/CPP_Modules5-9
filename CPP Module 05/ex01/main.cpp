/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:48:57 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/06 17:48:57 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main ( void ) {

    try
    {
        Bureaucrat hamdi("Bureaucrat Hamdi", 100);
        std::cout << hamdi << std::endl;

        Form Form1("Form 1", 120, 75);
        std::cout << Form1 << std::endl;

        hamdi.signForm(Form1);
        std::cout << Form1 << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}