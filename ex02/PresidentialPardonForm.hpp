#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
	const std::string& _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);
	virtual ~PresidentialPardonForm();
	void	action() const;
	const std::string& getTarget() const;
};

#endif