/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:06:59 by yachehbo          #+#    #+#             */
/*   Updated: 2023/03/16 16:10:28 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
#include <deque>
#include <vector>
#include <chrono>
class PmergeMe
{
	private:
		std::deque<int> _deque;
		std::vector<int> _vector;
	public:
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe &copy);
		~PmergeMe();
		PmergeMe & operator=(const PmergeMe &assign);
		
		int check(std::string str);
		template <typename T>
		void print(T &container);
		template <typename T>
		void sort(T &container);
		template <typename T>
		void marge(T &container, T &left, T &right);
		template <typename T>
		void insert_sort(T &container);
		
};

#endif