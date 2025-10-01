#include "Point.h"
#include <math.h>
using namespace  std;
#include <iostream>

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Point::distance(Point p)
{
		float dx = this->x - p.x;
		float dy = this->y - p.y;
		return sqrt(dx * dx + dy * dy);
}

void Point::afficher()
{
	cout << "(" << this->x << "," << this->y << ")" << std::endl;
}
