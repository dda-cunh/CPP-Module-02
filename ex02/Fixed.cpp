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

Fixed & Fixed::operator++()
{
	this->setRawBits(roundf((this->toFloat() + EPSILON) * 256));
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	copy(*this);

	++(*this);
	return (copy);
}

Fixed & Fixed::operator--()
{
	this->setRawBits(roundf((this->toFloat() - EPSILON) * 256));
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	copy(*this);

	--(*this);
	return (copy);
}

float Fixed::operator+(Fixed const & rhs) const
{
	float	r;

	r = this->toFloat() + rhs.toFloat();
	return (r);
}

float Fixed::operator-(Fixed const & rhs) const
{
	float	r;

	r = this->toFloat() - rhs.toFloat();
	return (r);
}

float Fixed::operator*(Fixed const & rhs) const
{
	float	r;

	r = this->toFloat() * rhs.toFloat();
	return (r);
}

float Fixed::operator/(Fixed const & rhs) const
{
	float	r;

	r = this->toFloat() / rhs.toFloat();
	return (r);
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

const Fixed & Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	return ((lhs > rhs) ? lhs : rhs);
}

Fixed & Fixed::max(Fixed & lhs, Fixed & rhs)
{
	return ((lhs > rhs) ? lhs : rhs);
}

const Fixed & Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	return ((lhs < rhs) ? lhs : rhs);
}

Fixed & Fixed::min(Fixed & lhs, Fixed & rhs)
{
	return ((lhs < rhs) ? lhs : rhs);
}
