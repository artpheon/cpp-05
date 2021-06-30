#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
AForm("RobotomyRequestForm", 72, 45), _target(target) {
    srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& right) :
AForm("RobotomyRequestForm", 72, 45, right.getState()) , _target(right.getTarget()) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& right) {
    AForm::operator=(right);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string& RobotomyRequestForm::getTarget() const {
    return _target;
}

void	RobotomyRequestForm::action() const {
    std::cout << "*dzzz dzzz*" << std::endl;
    if (rand() % 2)
        std::cout << "<" << _target << "> has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotimization failed" << std::endl;
}
