#pragma once
class Point
{
private:
	float x, y;
public:
	Point(float, float);
	float distance(Point);
	void afficher();
};

