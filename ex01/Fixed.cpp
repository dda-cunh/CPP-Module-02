#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy Assignement operator called" << std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int integer) : value(integer << nBits)
{
	std::cout << "Int constructor called" << std::endl;	
	return ;
}

Fixed::Fixed(const float f) : value(roundf(f * 256))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

float	Fixed::toFloat() const
{
	return ((float)value / 256);
}

int	Fixed::toInt() const
{
	if (this->value | 0x00000000)
		return (this->value / 256);
	return (this->getRawBits());
}

int	Fixed::getRawBits() const
{
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
	return ;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
