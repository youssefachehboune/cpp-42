/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:11:46 by yachehbo          #+#    #+#             */
/*   Updated: 2023/03/18 12:05:09 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void BitcoinExchange::read_data()
{
	std::ifstream file("data.csv");
	std::string line;
	std::string time;
	std::string btc;
	int ver = 0;
	
	while(std::getline(file, line))
	{
		if(line == "date,exchange_rate")
			continue;
		ver = line.find(',');
		time = line.substr(0, ver);
		btc = line.substr(ver + 1, line.length() - ver);
		data[time] = std::stof(btc);
	}
}

std::string get_time(std::string str)
{
	int k = 0;
	for(int j = str.length() - 1; j >= 0; j--)
	{
		if(str[j] == ' ' || str[j] == '\t')
			k++;
		else
			break;
	}
	str = str.substr(0, str.length() - k);
	return str;
	
}

int check_time(std::string time)
{
	int year = 0;
	int month = 0;
	int day = 0;
	
	if(time[4] != '-' || time[7] != '-')
		return 0;
	try
	{
		year = std::stoi(time.substr(0, 4));
		month = std::stoi(time.substr(5, 2));
		day = std::stoi(time.substr(8, 2));
	}
	catch(const std::exception& e)
	{
		return 0;
	}
	if(month == 2 && day > 28)
		return 0;
	if(year < 2009 || year > 2023 || month < 1 || month > 12 || day < 1 || day > 31)
		return 0;
	return 1;
}

std::string get_btc(std::string btc)
{
	int i = 0;
	for (; i < (int)btc.length(); i++)
	{
		if (btc[i] == ' ' || btc[i] == '\t')
			continue;
		else
			break;
	}
	int k = 0;
	for(int j = btc.length() - 1; j >= 0; j--)
	{
		if(btc[j] == ' ' || btc[j] == '\t')
			k++;
		else
			break;
	}
	btc = btc.substr(i, btc.length() - i - k);
	return btc;
	
}

int check_btc(std::string btc)
{
	int p = 0;
	for(int i = 0; i < (int)btc.length() ; i++)
	{
		if(btc[i] == '.')
			p++;
		else if(btc[i] >= '0' || btc[i] <= '9')
			continue;
		else
			return 0;
	}
	if(p > 1)
		return 0;

	try 
	{
		std::stof(btc);
	}
	catch(const std::exception& e)
	{
		return 0;
	}
	return 1;
}

void BitcoinExchange::wallet(std::string path)
{
	std::ifstream file(path);
	std::string line;
	std::string time;
	std::string btc;
	int i;
	std::string new_line;
	while(std::getline(file, line))
	{
		i = 0;
		for (int j = 0; j < (int)line.length(); j++)
		{
			if (line[j] == ' ' || line[j] == '\t')
				i++;
			else
				break;
		}
		line = line.substr(i, line.length() - i);
		if(line == "")
			continue;
		i = 0;
		time = "";
		i = line.find('|');
		time = get_time(line.substr(0, i));
		btc = get_btc(line.substr(i + 1, line.length() - i));
		if(!check_time(time) || !check_btc(btc))
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		float btcf = std::stof(btc); 
		if(btcf < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}
		else if(btcf > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue;
		}
		else
		{
			if(data.find(time) != data.end())
				std::cout << time << " => " << btc  << " = " << data[time] * std::stof(btc) << std::endl;
			else 
				std::cout << time << " => " << btc  << " = " << data.lower_bound(time)->second * std::stof(btc) << std::endl;
		}
	}
	
}

BitcoinExchange::BitcoinExchange(std::string file)
{
	this->read_data();
	this->wallet(file);
}

BitcoinExchange::~BitcoinExchange()
{
}

std::map<std::string, float, std::greater<std::string> > BitcoinExchange::getData()
{
	return data;
}