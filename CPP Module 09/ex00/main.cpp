/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 07:47:09 by hyolasig          #+#    #+#             */
/*   Updated: 2023/12/10 17:03:59 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool dateValid(const std::string &Date)
{
	if (Date.length() != 11){
		std::cout << "Invalid date format length" << std::endl;
		return (false);
		}
	if (Date[4] != '-' || Date[7] != '-'){
		std::cout << "Invalid date format -" << std::endl;
		return (false);
		}
	if (Date[0] < '0' || Date[0] > '9' || Date[1] < '0' || Date[1] > '9' || \
		Date[2] < '0' || Date[2] > '9' || Date[3] < '0' || Date[3] > '9'){
		std::cout << "Invalid date format year" << std::endl;
		return (false);
		}
	if (Date[5] < '0' || Date[5] > '9' || Date[6] < '0' || Date[6] > '9'){
		std::cout << "Invalid date format month" << std::endl;
		return (false);
		}
	if (Date[8] < '0' || Date[8] > '9' || Date[9] < '0' || Date[9] > '9'){
		std::cout << "Invalid date format day" << std::endl;
		return (false);
		}
	return (true);
}

static bool floatValid(const std::string &val)
{
	int dot = 0;

	for (std::size_t i = 0; i < val.size(); i++){
		if (val[i] == '.' && dot == 0){
			dot++;
			continue;
		}
		if (!isdigit(val[i]) && val[i] != '.')
			continue;
	}
	std::istringstream iss(val);
	float d;
	iss >> d;
	if (d <= 0){
		std::cout << "Invalid float format negative" << std::endl;
		return (false);
		}
	else if (d > 1000){
		std::cout << "Invalid float format too big" << std::endl;
		return (false);
		}
	return (true);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./btc file" << std::endl;
		return (1);
	}
	try
	{
		BitcoinExchange bitcoinExc;
		std::ifstream file(av[1]);
		if (!file.is_open())
			throw std::runtime_error("File not found");
		std::string line;
		std::getline(file, line);
		if (line != "date | value")
		{
			file.close();
			throw std::runtime_error("Invalid file format");
		}
		for (int i = 0; std::getline(file, line); i++)
		{
			std::stringstream ss(line);
			std::string date;
			std::string value;
			std::getline(ss, date, '|');
			if (!dateValid(date))
				continue;
			date.erase(date.size() - 1);
			std::getline(ss, value, '|');
			value.erase(0, 1);
			if (!floatValid(value))
				continue;
			std::istringstream iss(value);
			float floatVal;
			iss >> floatVal;
			floatVal *= bitcoinExc.getExchangeR(date);
			std::cout << date << " => " << value << " = "<< floatVal << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
