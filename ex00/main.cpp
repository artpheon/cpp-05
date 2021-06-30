#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat high("Highest", 1);
		std::cout << high << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Bureaucrat low("Lowest", 150);
		std::cout << low << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Bureaucrat tooHigh("tooHigh", 0);
		std::cout << tooHigh << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat bur("bur", 150);
		std::cout << bur << std::endl;
		bur.dec();
		std::cout << bur.dec() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}