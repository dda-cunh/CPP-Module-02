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
    std::cout << std::endl << std::endl;
}
int main(void)
{
	Point	a(0, 0);
	Point	b(0, 20);
	Point	c(20, 0);
	Point	point(10, 12);

	test(a, b, c, point);
	point.setX(1);
	point.setY(1);
	test(a, b, c, point);
	point.setX(1);
	point.setY(10);
	test(a, b, c, point);
    point.setX(10);
	point.setY(0);
	test(a, b, c, point);
    point.setX(10);
	point.setY(0.00390625f);
	test(a, b, c, point);
    point.setX(20);
	point.setY(0);
	test(a, b, c, point);
    point.setX(8);
	point.setY(12);
	test(a, b, c, point);
	return (0);
}