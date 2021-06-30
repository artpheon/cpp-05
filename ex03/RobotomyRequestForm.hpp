#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public AForm {
private:
	const std::string& _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(const std::string&);
	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm& operator=(const RobotomyRequestForm&);
	virtual ~RobotomyRequestForm();
	void	action() const;
	const std::string& getTarget() const;
};

#endif