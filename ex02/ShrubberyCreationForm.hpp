#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm {
private:
	const std::string& _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(const std::string&);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
	virtual ~ShrubberyCreationForm();
	void	action() const;
	const std::string& getTarget() const;
};

#endif