/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:11:52 by yachehbo          #+#    #+#             */
/*   Updated: 2023/03/16 14:45:36 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
#include <map>
#include <functional>

class BitcoinExchange
{
	private:
		std::map<std::string, float, std::greater<std::string> > data;
	public:
		BitcoinExchange(std::string file);
		void read_data();
		void wallet(std::string path);
		~BitcoinExchange();
		std::map<std::string, float, std::greater<std::string> >  getData();
		
};

#endif
