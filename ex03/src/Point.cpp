#include "../inc/Point.hpp"

Point::Point(void) : x(0), y(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Point::Point(Point const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Point & Point::operator=(Point const & rhs)
{
	std::cout << "Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->x = rhs.getX();
		this->y = rhs.getY();
	}
	return (*this);
}

Point::~Point(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Point::Point(float const x, float const y) : x(x), y(y)
{
    std::cout << "Parametric called" << std::endl;
    return ;
}

const Fixed & Point::getX() const
{
	return (this->x);
}
const Fixed & Point::getY() const
{
	return (this->y);
}
void	Point::setX(Fixed const & x)
{
	this->x = x;
}
void	Point::setY(Fixed const & y)
{
	this->y = y;
}

std::ostream & operator<<(std::ostream & o, Point & p)
{
	o << "(" << p.getX() << ", " << p.getY() << ")";
	return (o);
}
