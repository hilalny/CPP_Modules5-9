/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:50:37 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/06 19:58:41 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void) {

	try
	{

		Bureaucrat yufus("Yufus", 3);
		Intern intern;

		AForm *aform;

		aform = intern.makeForm("robotomy request", "robot");
		std::cout << *aform << std::endl;

		yufus.signForm(*aform);
		std::cout << *aform << std::endl;

		yufus.executeForm(*aform);
		std::cout << *aform << std::endl;

		delete aform;

	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	
}