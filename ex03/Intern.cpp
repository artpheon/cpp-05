#include "Intern.hpp"

AForm* Intern::_makeSCForm(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::_makeRRForm(const std::string& target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::_makePPForm(const std::string& target) {
    return new PresidentialPardonForm(target);
}


Intern::Intern() {
    _makeForm[0] = &Intern::_makeSCForm;
    _makeForm[1] = &Intern::_makeRRForm;
    _makeForm[2] = &Intern::_makePPForm;
    _forms[0] = "shrubbery creation";
    _forms[1] = "robotomy request";
    _forms[2] = "presidential pardon";
}
Intern::~Intern() {}

Intern::Intern(const Intern& right) {
    if (this != &right)
        *this = right;
}

Intern& Intern::operator=(const Intern& right) {
    (void)right;
    return *this;
}

AForm*   Intern::makeForm(const std::string& type, const std::string& target) {
    for (int i = 0; i < 3; i++) {
        if (_forms[i] == type) {
            std::cout << "Intern creates <" << type << "> form" << std::endl;
            return (this->*(_makeForm[i]))(target);
        }
    }
    std::cout << "Unknown \"" << type << "\" form" << std::endl;
    return 0;
}