/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:54:05 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/08 00:50:25 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &filename)
{
	loadBitcoinPrice(filename);
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
	if (this != &src)
	{
		_bitcoinPrices = src._bitcoinPrices;
	}
	return *this;
}

void BitcoinExchange::loadBitcoinPrice(const std::string &filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
		throw std::runtime_error("File not found");
	std::string line;
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string date;
		std::string value;
		std::getline(iss, date, ',');
		std::getline(iss, value);
		if (!isDateValid(date) || !isValueValid(value))
			throw std::runtime_error("Invalid file format");
		_bitcoinPrices[date] = std::stod(value);
	}
	file.close();
}

double BitcoinExchange::displayBitcoinPrice(const std::string &date) const
{
	std::string cDate = findCDate(date);
	if (cDate.empty())
		throw std::runtime_error("Date not found");
	return _bitcoinPrices.at(cDate);
}


std::string BitcoinExchange::findCDate(const std::string &date) const
{
	std::map<std::string, double>::const_iterator it = _bitcoinPrices.find(date);
	if (it != _bitcoinPrices.end())
		return it->first;
	return "";
}

bool BitcoinExchange::isDateValid(const std::string &date) const
{
	if (date.length() != 10)
		return false;
	for (size_t i = 0; i < date.length(); i++)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return false;
		}
		else if (date[i] < '0' || date[i] > '9')
			return false;
	}
	return true;
}


bool BitcoinExchange::isValueValid(const std::string &value) const
{
	if (value.empty())
		return false;
	char *endptr;
	std::strtod(value.c_str(), &endptr);
	return (*endptr == '\0');
}
