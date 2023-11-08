/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:50:10 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/06 17:50:10 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150){

    std::cout << "Bureaucrat default constucter called." << std::endl;

}


Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){

    std::cout << "Bureaucrat constructor called." << std::endl;
    if(grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    if(grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        this->_grade = grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat& copy){

    std::cout << "Bureaucrat copy constructer called." << std::endl;
    *this = copy;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {

    std::cout << "Bureaucrat copy assigment operator called." << std::endl;
    this->_grade = copy._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat( void ) {

    std::cout << "Bureaucrat destructor called." << std::endl;
}

//getName & getGrade
std::string Bureaucrat::getName( void ) const {

    return (this->_name);
}
int Bureaucrat::getGrade ( void ) const {

    return (this->_grade);
}

//Member Functions
void Bureaucrat::upGrade( void ) {

    if(this->_grade - 1 < 1)
        throw(Bureaucrat::GradeTooHighException());
    this->_grade--;
}
void Bureaucrat::downGrade( void ) {

    if(this->_grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    this->_grade++;
}
void Bureaucrat::signForm(AForm &form) {

    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}
void Bureaucrat::executeForm(AForm const &form) {

    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't executed " << form.getName() << " because " << e.what() << '\n';
    }
    
}


//Exceptions
const char *Bureaucrat::GradeTooHighException::what( void ) const throw() {

    return ("Grade too HIGH.");
}
const char *Bureaucrat::GradeTooLowException::what( void ) const throw() {

    return ("Grade too LOW.");
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) {

    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return (os);
}