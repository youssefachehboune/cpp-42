/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:31:11 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/17 19:44:27 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void func(T const &elm)
{
    std::cout << elm << " ";
}

template <typename T>
void iter(T *arr, int len, void (* func)(T const &elm))
{
    int i = 0;
    while(i < len)
    {
        (*func)(arr[i]);
        i++;
    }
}

#endif