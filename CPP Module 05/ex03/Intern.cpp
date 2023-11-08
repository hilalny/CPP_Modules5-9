/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:50:23 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/06 17:50:24 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//Constructors & Destructors
Intern::Intern() {
	
	std::cout << "Intern default constructor called." << std::endl;
}

Intern::Intern(const Intern &copy) {

	std::cout << "Intern copy constructor called." << std::endl;
	*this = copy;
}

Intern::~Intern() {

	std::cout << "Intern destructor called." << std::endl;
}

Intern &Intern::operator=(const Intern &copy) {

	std::cout << "Intern copy assigment operator called." << std::endl;
	if(this != &copy)
	{
		*this = copy;
	}
	return(*this);
}

AForm *Intern::makeForm( std::string formName, std::string targetName ){

	std::string form_name_list[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int index = 0;
	int lenght = form_name_list->length() - 1;
	while (index < lenght && (form_name_list[index].empty() == false) && (form_name_list[index]).compare(formName))
		index++;
	AForm *form;
	switch (index)
	{
		case 0:
			form = new RobotomyRequestForm(targetName);
			break;
		case 1:
			form = new PresidentialPardonForm(targetName);
			break;
		case 2:
			form = new ShrubberyCreationForm(targetName);
			break;
		default:
			throw ( Intern::InternCantCreatedForm() );
	}
	std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);

}

const char *Intern::InternCantCreatedForm::what() const throw(){
	return ("Intern can't created form because there is no form this type!");
}