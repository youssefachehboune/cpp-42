/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:57:21 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/16 10:59:25 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	_target = "";
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy.getTarget(), 72, 45)
{
	_target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	_target = target;
	std::cout << "\e[0;33mFields Constructor called of RobotomyRequestForm " << _target << "\e[0m" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm " << _target << "\e[0m" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	_target = assign.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() > getGradeToExecute())
		throw (GradeTooLowException());
	if(!getSign())
		throw(FormNotSigned());
	srand(time(NULL));
	int	random = rand() % 2;
	if (random)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " has failed to get robotomized." << std::endl;
}
