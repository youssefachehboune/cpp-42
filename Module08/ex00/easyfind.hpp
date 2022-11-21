/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:52:59 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/19 12:36:12 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <array>
#include <deque>
#include <forward_list>
#include <list>

template <typename T>
void easyfind(T container, int i)
{
    typename T::iterator it;
    
    it = std::find(container.begin(), container.end(), i);
    if(it != container.end())
    {
        std::cout << "Element " << i << " Found" << std::endl;
    }
    else
      throw std::logic_error("Element Not Found");
}

#endif