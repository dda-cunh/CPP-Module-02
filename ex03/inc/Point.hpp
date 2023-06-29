#ifndef	POINT_HPP
# define	POINT_HPP

# include "../inc/Fixed.hpp"


class	Point
{
	public:
		Point(void);
		Point(Point const & src);
		Point & operator=(Point const & rhs);
		~Point(void);

		Point(float const newx, float const newy);
		const Fixed & getX() const;
		const Fixed & getY() const;
		void	setX(Fixed const & newx);
		void	setY(Fixed const & newy);

	private:
		Fixed	x;
		Fixed	y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream & operator<<(std::ostream & o, Point & p);

#endif