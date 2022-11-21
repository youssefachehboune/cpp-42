/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:43:40 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/16 13:43:41 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName())
{
	if(copy.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	if(copy.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = copy.getGrade();
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	std::cout << "\e[0;33mFields Constructor called of Bureaucrat " << _name << "\e[0m" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat " << _name << "\e[0m" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	if(assign.getGrade() < 1)
		throw GradeTooHighException();
	if(assign.getGrade() > 150)
		throw GradeTooLowException();
	_grade = assign.getGrade();
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}


void Bureaucrat::incrementGrade()
{
	if((_grade - 1) < 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::decrementGrade()
{
	if((_grade + 1) > 150)
		throw GradeTooLowException();
	this->_grade += 1;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream & operator<<(std::ostream &ostream ,const Bureaucrat &obj)
{
	ostream << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return ostream;
}