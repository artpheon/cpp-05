#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bur("Highest", 0);
	std::cout << bur << std::endl << std::endl;

	Bureaucrat bure("Lowest", 151);
	std::cout << bure << std::endl << std::endl;


	bur.dec();
	std::cout << bur.dec().dec().dec() << std::endl;
	std::cout << bur.inc().inc() << std::endl;
	return 0;
}