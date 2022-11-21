#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Intern & operator=(const Intern &assign);
		
        Form *makeForm(std::string type, std::string target);

		class FormNotFound : public std::exception {
			virtual const char* what() const throw();
		};
};

#endif