/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:48:29 by hyolasig          #+#    #+#             */
/*   Updated: 2023/11/06 17:48:29 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void ) {

    {
        std::cout <<"\033[0;31m" "------------------ Try-Catch Example [1] -------------------" "\033[m"<< std::endl;
        int x = -1;        
        std::cout << "Before try \n";
        try {
            std::cout << "Inside try \n";
            if (x < 0)
            {
                throw x;
                std::cout << "After throw (Never executed) \n";
            }
        }
        catch (int x ) {
            std::cout << "Exception Caught \n";
        }       
        std::cout << "After catch (Will be executed) \n";
    }

    {
        std::cout <<"\033[0;31m" "------------------ Try-Catch Example [2] -------------------" "\033[m"<< std::endl;
        try  {
           throw 10;
        }
        catch (char *excp)  {
            std::cout << "Caught " << excp;
        }
        catch (...)  {
            std::cout << "Default Exception\n";
        }
    }

	{
		std::cout <<"\033[0;31m" "----------------- No Exception Example [3] -----------------" "\033[m"<< std::endl;
		try
		{
			Bureaucrat huseyin("Bureaucrat Huseyin", 42);
			std::cout << huseyin << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

    {
		std::cout <<"\033[0;31m" "---------------- Too High Grade Example [4] ----------------" "\033[m"<< std::endl;
		try
		{
			Bureaucrat hamdi("Bureaucrat Hamdi", 151);
			std::cout << hamdi << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
        }
	}

    {
        std::cout <<"\033[0;31m" "------------------- Standard Example [5] -------------------" "\033[m"<< std::endl;
        try
        {

            Bureaucrat hamdi("Bureaucrat Hamdi", 140);
            Bureaucrat sabri("Bureaucrat Sabri", 150);
            Bureaucrat huseyin("Bureaucrat Huseyin", 149);

            std::cout << huseyin << std::endl;
            huseyin.downGrade();
            std::cout << huseyin << std::endl;
            huseyin.upGrade();
            huseyin.upGrade();
            std::cout << huseyin << std::endl;
            huseyin.downGrade();
            huseyin.downGrade();
            huseyin.downGrade();
            std::cout << huseyin << std::endl;

        }
        catch(const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}