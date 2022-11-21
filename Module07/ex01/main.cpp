/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:31:36 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/17 19:45:17 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int arr[] = {1, 2, 5, 5};
    ::iter(arr, 4, &func);
    std::cout << std::endl;
    char str[] = "Hello";
    ::iter(str, 5, &func);
    std::cout << std::endl;
    float farr[] = {0.5f, -5.8, 9.8};
    ::iter(farr, 3, &func);
    std::cout << std::endl;
    double darr[] = {8.9, 78.92, 99.25};
    ::iter(darr, 3, &func);
    std::cout << std::endl;
}
