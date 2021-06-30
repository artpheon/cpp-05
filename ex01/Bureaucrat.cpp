#include "Bureaucrat.hpp"

void	Bureaucrat::_setGrade(int g) {
	// try
	// {
		if (g < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (g > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade = (short)g;
	// }
	// catch (Bureaucrat::GradeTooHighException& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// 	_grade = 1;
	// }
	// catch (Bureaucrat::GradeTooLowException& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// 	this->_grade = 150;
	// }
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	_setGrade(grade);
	std::cout << "Bureaucrat created!" << std::endl;
}
Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destroyed!" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat& right) : _name(right.getName()) {
	*this = right;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& right) {
	_grade = right.getGrade();
	return *this;
}
const std::string& Bureaucrat::getName() const {
	return _name;
}
short	Bureaucrat::getGrade() const {
	return _grade;
}
Bureaucrat& Bureaucrat::inc() {
	_setGrade(_grade - 1);
	return *this;
}
Bureaucrat& Bureaucrat::dec() {
	_setGrade(_grade + 1);
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low!";
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& right) {
	o << right.getName() << ", bureaucrat of grade " << right.getGrade();
	return o;
}