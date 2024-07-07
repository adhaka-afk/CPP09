/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:54:08 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/07 05:00:01 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include <stdexcept>
#include <sstream>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(const std::string &filename);
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &src);
		~BitcoinExchange();

		void loadBitcoinPrice(const std::string &filename);
		double displayBitcoinPrice(const std::string &date) const;

	private:
		std::map<std::string, double> _bitcoinPrices;
		std::string findCDate(const std::string &date) const;
		bool isDateValid(const std::string &date) const;
		bool isValueValid(const std::string &value) const;
};

#endif
