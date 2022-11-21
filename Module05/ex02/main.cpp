/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:18:34 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/16 11:04:16 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int	main(void) {

	try {
		ShrubberyCreationForm	TreePlant("tree");
		PresidentialPardonForm	Pardon("Jimmy");
		RobotomyRequestForm		Robotomize("George");
		Bureaucrat				Joe("Joe", 5);

		std::cout << TreePlant << std::endl;
		std::cout << Pardon << std::endl;
		std::cout << Robotomize << std::endl;

		TreePlant.beSigned(Joe);
		Pardon.beSigned(Joe);
		Robotomize.beSigned(Joe);

		std::cout << TreePlant << std::endl;
		std::cout << Pardon << std::endl;
		std::cout << Robotomize << std::endl;

		Joe.executeForm(TreePlant);
		std::cout << std::endl;
		Joe.executeForm(Pardon);
		std::cout << std::endl;
		Joe.executeForm(Robotomize);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}