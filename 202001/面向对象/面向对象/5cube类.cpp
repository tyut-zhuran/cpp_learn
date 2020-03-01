# include <iostream>
using namespace std;

class Cube
{
private:
	int m_L, m_W, m_H;

public:
	void setL(int L)
	{
		m_L = L;
	}
	int getL()
	{
		return m_L;
	}


	void setW(int W)
	{
		m_W = W;
	}
	int getW()
	{
		return m_W;
	}

	void setH(int H)
	{
		m_H = H;
	}
	int getH()
	{
		return m_H;
	}


	int getS()
	{
		return 2 * (m_L*m_W + m_L*m_H + m_W*m_H);
	}
	int getV()
	{
		return m_L*m_W*m_H;
	}


};


//判断两个Cube是否相同
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}


int main5()
{
	Cube c1;
	c1.setL(2);
	c1.setW(3);
	c1.setH(4);
	cout << c1.getS() << endl;
	cout << c1.getV() << endl;

	Cube c2;
	c2.setL(2);
	c2.setW(3);
	c2.setH(4);
	cout << isSame(c1, c2) << endl;
	system("pause");
	return 0;
}















