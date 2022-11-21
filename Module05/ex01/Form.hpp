/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:43:25 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/16 13:43:26 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	public:
		Form();
		Form(const Form &copy);
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		~Form();
		Form & operator=(const Form &assign);
		
		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		
		void beSigned(const Bureaucrat & bureaucrat);

	private:
		const std::string _name;
		bool _sign;
		const int _gradeToSign;
		const int _gradeToExecute;
		
};
std::ostream &operator<<(std::ostream &ostream, Form &obj);

#endif