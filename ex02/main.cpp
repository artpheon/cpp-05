#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void test1() {
	Bureaucrat bur("Sign God", 146);
	ShrubberyCreationForm form("home");
	std::cout << std::endl;
	bur.signForm(form);
	bur.inc().inc();
	std::cout << bur << std::endl;
	bur.signForm(form);
	bur.execForm(form);
	bur.inc().inc().inc().inc().inc().inc().inc();
	std::cout << bur << std::endl;
	bur.execForm(form);
	std::cout << std::endl;
}

void	test2() {
	Bureaucrat crat("Executor", 74);
	RobotomyRequestForm form("new robot");
	std::cout << crat << std::endl;
	std::cout << form << std::endl;
	crat.execForm(form);
	crat.signForm(form);
	crat.inc().inc();
	std::cout << crat << std::endl;
	crat.signForm(form);
	for (int i = 0; i < 30; i++) {
		crat.inc();
	}
	std::cout << crat << std::endl;
	crat.execForm(form);
	crat.execForm(form);
	crat.execForm(form);
	crat.execForm(form);
	crat.execForm(form);
	crat.execForm(form);
	crat.execForm(form);
	crat.execForm(form);
	crat.execForm(form);
	crat.execForm(form);
	crat.execForm(form);
	std::cout << std::endl;
}

void	test3() {
	Bureaucrat crat("Burr", 26);
	PresidentialPardonForm pardon("president");
	std::cout << crat << std::endl;
	std::cout << pardon << std::endl;
	crat.execForm(pardon);
	crat.signForm(pardon);
	crat.inc().inc();
	std::cout << crat << std::endl;
	crat.signForm(pardon);
	for (int i = 0; i < 20; i++) {
		crat.inc();
	}
	crat.execForm(pardon);
}

int main() {
	std:: cout << "____________TEST1___________" << std::endl;
	test1();
	std:: cout << "____________TEST2___________" << std::endl;
	test2();
	std:: cout << "____________TEST3___________" << std::endl;
	test3();	
	return 0;
}