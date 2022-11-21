/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:02:17 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/18 15:57:05 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
class Span
{
	public:
		Span();
		Span(const Span &copy);
		Span(unsigned int N);
		~Span();
		Span & operator=(const Span &assign);
		unsigned int getN() const;
		
        void 	addNumber(int nb);
		int 	shortestSpan();
		int  	longestSpan();
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	private:
		unsigned int _N;
		std::vector<int> _vect; 
};

#endif