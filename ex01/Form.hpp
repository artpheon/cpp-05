#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string _name;
	const int     _gradeToSign;
	const int     _gradeToExec;
	bool    _signed;
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	Form();
public:
	Form(const std::string&, int, int, bool = false);
	Form(const Form&);
	Form& operator=(const Form&);
	virtual ~Form();
	Form&	beSigned(const Bureaucrat&);
	const std::string&	getName() const;
	int	getGradeToSign() const;
	int	getGradeToExec() const;
	bool	getState() const;
};

std::ostream&	operator<<(std::ostream &, const Form&);

#endif