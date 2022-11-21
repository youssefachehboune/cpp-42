/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:59:52 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/16 11:06:11 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _sign(0), _gradeToSign(0), _gradeToExecute(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy) : _name(copy.getName()), _sign(copy.getSign()), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{
	if(_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if(_gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _sign(0),_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if(_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if(_gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
}

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

Form & Form::operator=(const Form &assign)
{
	_sign = assign._sign;
	return *this;
}

std::string Form::getName() const
{
	return _name;
}
bool Form::getSign() const
{
	return _sign;
}
int Form::getGradeToSign() const
{
	return _gradeToSign;
}
int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}
const char * Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

std::ostream &operator<<(std::ostream &ostream, Form &obj)
{
	ostream << "Form name : " << obj.getName() << ", Form sign : " << obj.getSign() << ", grade to sign : " << obj.getGradeToSign() << ", grade to execute : " << obj.getGradeToExecute();
	return ostream;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() <= getGradeToSign())
		_sign = 1;
	else
		throw(GradeTooLowException());
}

const char * Form::FormNotSigned::what() const throw() {
	return "The form is not signed.";
}

