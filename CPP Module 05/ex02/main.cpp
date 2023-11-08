/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:49:25 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/08 12:46:34 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	try
	{

	Bureaucrat emre("Emre", 4);
	std::cout << emre << std::endl;

	ShrubberyCreationForm FormS("shrubberyyyyyyyyy");
	std::cout << FormS << std::endl;

	emre.signForm(FormS);

	std::cout << FormS << std::endl;

	emre.executeForm(FormS);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}