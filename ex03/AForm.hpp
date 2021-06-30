#ifndef AFORM_HPP
# define AFORM_HPP
# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
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
	class FormUnsignedException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	AForm();
public:
	AForm(const std::string&, int, int, bool = false);
	AForm(const AForm&);
	AForm& operator=(const AForm&);
	virtual ~AForm();
	AForm&	beSigned(const Bureaucrat&);
	const std::string&	getName() const;
	int	getGradeToSign() const;
	int	getGradeToExec() const;
	bool	getState() const;
	void	execute(const Bureaucrat& executor) const;
	virtual void	action() const = 0;
};

std::ostream&	operator<<(std::ostream &, const AForm&);

#endif