#pragma once
class Point
{
private:
	float x;
    float y;
public:
	Point(float, float);
	float distance(Point);
	void afficher();
};

