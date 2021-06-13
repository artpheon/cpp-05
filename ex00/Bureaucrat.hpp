#pragma once
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string _name;
	short	_grade;
	void	_setGrade(int);
	Bureaucrat();
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