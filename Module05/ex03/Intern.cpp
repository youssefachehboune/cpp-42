#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}

Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}

Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

Form *Intern::makeForm(std::string type, std::string target)
{
	int i;
	std::string types[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	i = 0;
	while(i < 3)
	{
		if (types[i] == type)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			return new ShrubberyCreationForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new PresidentialPardonForm(target);
		default:
			throw FormNotFound();
	}
}

const char* Intern::FormNotFound::what() const throw()
{
	return "Form Not Found!";
}