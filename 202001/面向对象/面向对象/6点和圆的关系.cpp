
/*
# include <iostream>


using namespace std;

class Point
{
private:
	int m_X;
	int m_Y;

public:
	void setX(int X)
	{
		m_X = X;
	}
	int getX()
	{
		return m_X;
	}

	void setY(int Y)
	{
		m_Y = Y;
	}
	int getY()
	{
		return m_Y;
	}
};

class Circle
{
private:
	Point m_Center;
	int m_R;

public:
	void setCenter(Point p)
	{
		m_Center = p;
	}
	Point getCenter()
	{
		return m_Center;
	}

	void setR(int R)
	{
		m_R = R;
	}
	int getR()
	{
		return m_R;
	}


};

bool isIncircle(Circle &c, Point &p)
{
	//先计算圆心和点之间距离的平方
	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX())
		+ (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	//再计算圆半径的平方
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

*/
int main6()
{
	return 0;
}




