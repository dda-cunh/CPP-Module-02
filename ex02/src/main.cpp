#include "../inc/Fixed.hpp"

int main(void)
{
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	Fixed		a;
	Fixed		nine(9);
	Fixed		five(5);
	Fixed		four(4);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << (a / b) << std::endl;
	std::cout << (b / a) << std::endl;
	std::cout << (nine / four) << std::endl;
	std::cout << (four / nine) << std::endl;
	std::cout << (nine == four ? "9 == 4" : "9 != 4") << std::endl;
	std::cout << (five == five ? "5 == 5" : "5 != 5") << std::endl;
	std::cout << (five >= five ? "5 >= 5" : "5 < 5") << std::endl;
	std::cout << (five > five ? "5 > 5" : "5 <= 5") << std::endl;
	return (0);
}
