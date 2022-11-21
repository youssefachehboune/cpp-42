/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:56:09 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/18 13:46:42 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::array<int, 5> arr = {0, 1, 2, 3, 8};
    std::vector<int> vec(arr.begin(), arr.end());
    std::deque<int> deq(arr.begin(), arr.end());
    std::list<int> lst(arr.begin(), arr.end());
    std::forward_list<int> flst(arr.begin(), arr.end());
    
    try
    {
        easyfind(arr, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(vec, 2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        easyfind(lst, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        easyfind(flst, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(deq, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}