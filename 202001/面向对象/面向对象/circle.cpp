#include "circle.h"



void Circle::setCenter(Point p)
{
	m_Center = p;
}
Point Circle::getCenter()
{
	return m_Center;
}

void Circle::setR(int R)
{
	m_R = R;
}
int Circle::getR()
{
	return m_R;
}


