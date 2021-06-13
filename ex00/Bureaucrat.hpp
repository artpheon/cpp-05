#pragma once
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>
# include <iostream>
# include <exception>


class Bureaucrat
{
private:
	const std::string _name;
	short	_grade;
	void	_setGrade(int);
	Bureaucrat();
	class	GradeTooHighException: public std::exception {
		public:
			const char* what() const throw();
	};
	class	GradeTooLowException: public std::exception {
		public:
			const char* what() const throw();
	};
public:
	Bureaucrat(std::string, int = 150);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);
	const std::string& getName() const;
	short	getGrade() const;
	Bureaucrat& inc();
	Bureaucrat& dec();
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& right);

#endif