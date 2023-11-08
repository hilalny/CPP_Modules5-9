/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:50:44 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/06 17:50:45 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//Constructors & Destructors
PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("Default") {
	
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target) {

	std::cout << "PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm("PresidentialPardonForm", 25, 5), _target(copy._target) {

	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
} 

PresidentialPardonForm::~PresidentialPardonForm() {

	std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {

	std::cout << "PresidentialPardonForm copy assigment operator called." << std::endl;
	if(this != &copy)
	{
		this->_signed = copy.getSign();
	}
	return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {

	if(this->getSign() == false)
		throw(AForm::AFormNotSigned());
	if(this->getExecuteGrade() < executor.getGrade())
		throw(AForm::GradeTooLowException());

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}