#pragma once
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int	_grade;
	void	_setGrade(int);
	Bureaucrat();
	class	GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};
	class	GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};
public:
	Bureaucrat(std::string, int = 150);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);
	const std::string& getName() const;
	int	getGrade() const;
	Bureaucrat& inc();
	Bureaucrat& dec();
	void	signForm(Form&) const;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& right);

#endif