/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:18:34 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/16 14:05:28 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form ff("ss", 2, 5);
        Form dd(ff);
        Bureaucrat bb("bb", 1);
        std::cout << dd << std::endl;
        dd.beSigned(bb);
        std::cout << dd << std::endl;
    }
    catch(const std::exception &e)
    {
       std::cerr << e.what() << '\n';
    }

}
