/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:27:58 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/17 19:29:12 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &num1, T &num2)
{
    T   tmp;

    tmp = num1;
    num1 = num2;
    num2 = tmp;
}

template <typename T>
T min(T num1, T num2)
{
    if (num1 < num2)
        return num1;
    return num2;
}

template <typename T>
T max(T num1, T num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

#endif
