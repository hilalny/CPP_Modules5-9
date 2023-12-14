/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 07:46:58 by hyolasig          #+#    #+#             */
/*   Updated: 2023/12/10 16:33:08 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	_filename.open(BTCDATA_NAME);
	if (!_filename.is_open())
		throw std::runtime_error("File not found");

	std::string datacsvline;
	std::getline(_filename, datacsvline);
	if (datacsvline != "date,exchange_rate")
	{
		_filename.close();
		throw std::runtime_error("Invalid file format");
	}

	std::string line;
	for (int i = 0; std::getline(_filename, line); i++)
	{
		std::stringstream ss(line);
		std::string date, btc_rate;
		std::getline(ss, date, ',');
		date = date.substr(0, 4) + date.substr(5, 2) + date.substr(8, 2);

		std::getline(ss, btc_rate, ',');
		std::istringstream iss(btc_rate);
		float btc_rate_float;
		iss >> btc_rate_float;
		_data[date] = btc_rate_float;
	}
	_filename.close();
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	_data = rhs._data;
	return (*this);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	*this = copy;
}

BitcoinExchange::~BitcoinExchange()
{
}

float BitcoinExchange::getExchangeR(std::string const &Date) const
{
	std::string intDate =  Date.substr(0, 4) + Date.substr(5, 2) + Date.substr(8, 2);

	std::map<std::string, float>::const_iterator it = _data.find(intDate);
	if (it != _data.end())
		return (it->second);

	std::string closesDate = "";
	float closesDateVal = 0.0f;
	bool closesDateFound = false;
	for (it = _data.begin(); it != _data.end(); it++)
	{
		if (it->first < intDate)
		{
			closesDate = it->first;
			closesDateVal = it->second;
			closesDateFound = true;
		}
		else
			break;
	}
	if (closesDateFound)
		return (closesDateVal);
	throw std::runtime_error("Date/ClosesDate not found");
}


