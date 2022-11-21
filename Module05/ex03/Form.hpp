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
		virtual ~Form();
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
		class FormNotSigned : public std::exception {
			virtual const char* what() const throw();
		};
		void beSigned(const Bureaucrat & bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string _name;
		bool _sign;
		const int _gradeToSign;
		const int _gradeToExecute;
		
};
std::ostream &operator<<(std::ostream &ostream, Form &obj);

#endif