/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:18:34 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/16 14:07:22 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    { 
        Bureaucrat bu("asnjn", 1);
        Bureaucrat so(bu);
        std::cout << bu << std::endl;
        bu.incrementGrade();
        bu.decrementGrade();
        std::cout << bu << std::endl;
        bu.incrementGrade();
        std::cout << bu << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
