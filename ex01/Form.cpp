#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

Form::Form(const std::string& name, int gradeToSign, int gradeToExec, bool state) :
_name(name),
_gradeToSign(gradeToSign),
_gradeToExec(gradeToExec),
_signed(state) {
    if (_gradeToSign > 150 || _gradeToExec > 150)
        throw Form::GradeTooLowException();
    if (_gradeToSign < 1 || _gradeToExec < 1)
        throw Form::GradeTooHighException();
}

Form::Form(const Form& right) :
_name(right.getName()),
_gradeToSign(right.getGradeToSign()),
_gradeToExec(right.getGradeToExec()),
_signed(right.getState())
{}

Form& Form::operator=(const Form& right) {
    _signed = right.getState();
    return *this;
}

Form::~Form() {}

Form&	Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= _gradeToSign && !_signed)
        _signed = true;
    return *this;
}

const std::string&	Form::getName() const {
    return _name;
}

int	Form::getGradeToSign() const {
    return _gradeToSign;
}

int	Form::getGradeToExec() const {
    return _gradeToExec;
}

bool	Form::getState() const {
    return _signed;
}

std::ostream&	operator<<(std::ostream &o, const Form& right) {
    o << "Form " << right.getName() << " requires " << right.getGradeToSign() <<
    " grade to be signed, " << right.getGradeToExec() << " grade to be executed, form is " <<
    (right.getState() ? "signed." : "unsigned.") << std::endl;
    return o;
}