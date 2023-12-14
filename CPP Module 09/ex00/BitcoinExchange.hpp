/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 07:47:01 by hyolasig          #+#    #+#             */
/*   Updated: 2023/12/10 16:31:56 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

#define BTCDATA_NAME "data.csv"

class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;
		std::ifstream _filename;

	public:
		BitcoinExchange();
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		BitcoinExchange(BitcoinExchange const &copy);
		~BitcoinExchange();

		float getExchangeR(const std::string &Date) const;
};
