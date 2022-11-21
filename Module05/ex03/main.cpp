/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:18:34 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/16 14:18:23 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void) {

	try {
		Intern someRandomIntern;
		Form* rrf;

		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
		std::cout << std::endl;
	
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
		std::cout << std::endl;

		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
		std::cout << std::endl;

		rrf = someRandomIntern.makeForm("dddd rdon", "Bender");
		delete rrf;
		std::cout << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}