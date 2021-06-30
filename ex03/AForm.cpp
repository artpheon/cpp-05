#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

const char* AForm::FormUnsignedException::what() const throw() {
    return "Form is unsigned!";
}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExec, bool state) :
_name(name),
_gradeToSign(gradeToSign),
_gradeToExec(gradeToExec),
_signed(state) {
    if (_gradeToSign > 150 || _gradeToExec > 150)
        throw AForm::GradeTooLowException();
    if (_gradeToSign < 1 || _gradeToExec < 1)
        throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm& right) :
_name(right.getName()),
_gradeToSign(right.getGradeToSign()),
_gradeToExec(right.getGradeToExec()),
_signed(right.getState())
{}

AForm& AForm::operator=(const AForm& right) {
    _signed = right.getState();
    return *this;
}

AForm::~AForm() {}

AForm&	AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= _gradeToSign && !_signed)
        _signed = true;
    return *this;
}

const std::string&	AForm::getName() const {
    return _name;
}

int	AForm::getGradeToSign() const {
    return _gradeToSign;
}

int	AForm::getGradeToExec() const {
    return _gradeToExec;
}

bool	AForm::getState() const {
    return _signed;
}

void	AForm::execute(const Bureaucrat& executor) const {
    if (_signed) {
        if (executor.getGrade() <= _gradeToExec)
            action();
        else
            throw GradeTooLowException();
    }
    else
        throw FormUnsignedException();
}

std::ostream&	operator<<(std::ostream &o, const AForm& right) {
    o << "AForm " << right.getName() << " requires " << right.getGradeToSign() <<
    " grade to be signed, " << right.getGradeToExec() << " grade to be executed, AForm is " <<
    (right.getState() ? "signed." : "unsigned.") << std::endl;
    return o;
}