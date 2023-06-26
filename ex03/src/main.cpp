#include "../inc/Point.hpp"

void	test(Point & a, Point & b, Point  & c, Point & point)
{
	bool	inside;

	inside = bsp(a, b, c, point);
	std::cout << "The point " << point;
	if (inside)
		std::cout << " belongs to the triangle" << std::endl;
	else
		std::cout << " doesn't belong to the triangle" << std::endl;
	std::cout << a << "\t" << b << "\t" << c << std::endl;
}
int main(void)
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);
	Point	point(10, 15);

	test(a, b, c, point);
	point.setX(1);
	point.setY(1);
	test(a, b, c, point);
	point.setX(1);
	point.setY(10);
	test(a, b, c, point);
	return (0);
}