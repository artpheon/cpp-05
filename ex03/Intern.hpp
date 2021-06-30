#ifndef INTERN_H
# define INTERN_H
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
private:
    AForm* _makeSCForm(const std::string&);
    AForm* _makeRRForm(const std::string&);
    AForm* _makePPForm(const std::string&);
    typedef AForm* (Intern::*_frmPtr)(const std::string&);
    _frmPtr  _makeForm[3];
    std::string _forms[3];
public:
    Intern();
    ~Intern();
    Intern(const Intern&);
    Intern& operator=(const Intern&);
    AForm*   makeForm(const std::string&, const std::string&);
};

#endif