#include "Bureaucrat.hpp"

void	Bureaucrat::_setGrade(int g) {
	try
	{
		if (g < 1)
			throw 1;
		else if (g > 150)
			throw 150;
		else
			this->_grade = (short)g;
	}
	catch (int n)
	{
		if (n == 150) {
			std::cerr << "Grade too low" << std::endl;
			this->_grade = 150;
		}
		if (n == 1) {
			std::cerr << "Grade too high!" << std::endl;
			this->_grade = 1;
		}
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	this->_setGrade(grade);
	std::cout << "Bureaucrat created!" << std::endl;
}
Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destroyed!" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat& right) : _name(right.getName()) {
	*this = right;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& right) {
	this->_grade = right.getGrade();
	return *this;
}
const std::string& Bureaucrat::getName() const {
	return this->_name;
}
short	Bureaucrat::getGrade() const {
	return this->_grade;
}
Bureaucrat& Bureaucrat::inc() {
	this->_setGrade(this->_grade - 1);
	return *this;
}
Bureaucrat& Bureaucrat::dec() {
	this->_setGrade(this->_grade + 1);
	return *this;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& right) {
	o << right.getName() << ", bureaucrat of grade " << right.getGrade();
	return o;
}