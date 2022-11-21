/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:58:14 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/16 14:04:07 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	_target = "";
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy.getTarget(), 145, 137)
{
	_target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	_target = target;
	std::cout << "\e[0;33mFields Constructor called of ShrubberyCreationForm "<< _target << "\e[0m" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm " << _target << "\e[0m" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	_target = assign.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

const char* ShrubberyCreationForm::FileError::what() const throw() {
	return "Could not open file";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	file;

	if (executor.getGrade() > getGradeToExecute())
		throw (GradeTooLowException());
	if(!getSign())
		throw(FormNotSigned());
	file.open(_target + "_shrubbery");
	if (!file.is_open())
		throw (FileError());
	file << " 	        v			" << std::endl;
	file << "         >X<       	" << std::endl;
	file << "          A			" << std::endl;
	file << "         d$b			" << std::endl;
	file << "       .d/$$b.			" << std::endl;
	file << "     .d$i$$/$$b.		" << std::endl;
	file << "        d$$@b			" << std::endl;
	file << "       d/$$$ib			" << std::endl;
	file << "     .d$$$/$$$b		" << std::endl;
	file << "   .d$$@$$$$/$$ib.		" << std::endl;
	file << "       d$$i$$b			" << std::endl;
	file << "      d/$$$$@$b		" << std::endl;
	file << "   .d$@$$/$$$$$@b.		" << std::endl;
	file << " .d$$$$i$$$/$$$$$$b.	" << std::endl;
	file << "         ###			" << std::endl;
	file << "         ###			" << std::endl;
	file << "         ###		  	" << std::endl;

}