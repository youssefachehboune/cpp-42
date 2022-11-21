/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:28:46 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/19 11:06:59 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        std::vector<int> vect;
        Span sp = Span(10005);
        sp.addNumber(11);
        sp.addNumber(17);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(9);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        int i = -1;
        while(++i < 10000)
        {
            vect.push_back(i);
        }
        sp.addNumbers(vect.begin(), vect.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
