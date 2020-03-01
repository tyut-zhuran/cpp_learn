# include <iostream>


using namespace std;
#include "circle.h"
# include "point.h"




bool isIncircle(Circle &c, Point &p)
{
	//�ȼ���Բ�ĺ͵�֮������ƽ��
	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX())
		+ (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	//�ټ���Բ�뾶��ƽ��
	int rDistance = c.getR() * c.getR();

	if (distance < rDistance)
	{
		return true;
	}
	return false;
}


int main()
{

	Point p1;
	p1.setX(0);
	p1.setY(5);

	Point p2;
	p2.setX(0);
	p2.setY(2);
	Circle c;
	c.setCenter(p2);
	c.setR(2);

	cout << isIncircle(c, p1) << endl;



	system("pause");
	return 0;
}



