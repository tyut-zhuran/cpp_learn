#pragma once
# include <iostream>
using namespace std;
#include "point.h"


class Circle
{
private:
	Point m_Center;
	int m_R;

public:
	void setCenter(Point p);
	Point getCenter();

	void setR(int R);
	int getR();

};