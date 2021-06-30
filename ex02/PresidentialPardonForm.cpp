#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& right) :
AForm("PresidentialPardonForm", 25, 5, right.getState()), _target(right.getTarget()) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& right) {
    AForm::operator=(right);
    return *this;
}

const std::string& PresidentialPardonForm::getTarget() const {
    return _target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::action() const {
    std::cout << "<" << _target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}
