#include "../inc/Point.hpp"

/*
Area of a triangle made by three xOy points A, B and C:
	ABC = [xA(yB – yC) + xB(yC – yA) + xC(yA-yB)]/2
*/

Fixed	coordsArea(Point const & p1, Point const & p2, Point const & p3)
{
	Fixed	area = (p1.getX()*(p2.getY() - p3.getY())
					+ p2.getX()*(p3.getY() - p1.getY())
					+ p3.getX()*(p1.getY() - p2.getY())) / 2.0f;
	if (area <= 0)
		area.setRawBits(area.getRawBits() * -1);
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	areasP[3];
	Fixed	areaABC;

	if (point.getX() == a.getX() || point.getX() == b.getX() || point.getX() == c.getX()
		|| point.getY() == a.getY() || point.getY() == a.getY() || point.getY() == a.getY())
		return (false);
	areaABC = coordsArea(a, b, c);
	areasP[0] = coordsArea(point, a, b);
	areasP[1] = coordsArea(point, b, c);
	areasP[2] = coordsArea(point, a, c);
	return (areaABC == (areasP[0] + areasP[1] + areasP[2]));
}
