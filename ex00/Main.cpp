#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bur("ME", 0);
	std::cout << bur << std::endl;

	bur.dec();
	std::cout << bur.dec().dec().dec() << std::endl;
	std::cout << bur.inc().inc() << std::endl;
	return 0;
}