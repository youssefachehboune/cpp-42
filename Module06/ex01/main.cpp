/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:54:55 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/17 11:12:05 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_Data
{
    std::string name;
} Data;


uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data *one = new Data();
    one->name = "Hello World!";

    uintptr_t two = serialize(one);
    Data *three = deserialize(two);
    
    std::cout << one->name << std::endl;
    std::cout << three->name << std::endl;
    free(one);
}