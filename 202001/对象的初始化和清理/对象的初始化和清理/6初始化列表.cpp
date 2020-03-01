# include <iostream>
using namespace std;


class Person
{
public :
	int m_A;
	int m_B;
	int m_C;
	Person(int A,int B, int C)
	{
		m_A = A;
		m_B = B;
		m_C = C;
	}
};

class Person2
{
public :
	int  m_A;
	int m_B;
	int m_C;
	Person2(int A,int B, int C) :m_A(A), m_B(B), m_C(C)
	{
	}
};


int main()
{

	Person p(10,20,30);
	
	cout << "构造函数初始化:" << p.m_A << " " << p.m_B << " " << p.m_C << endl;
	
	Person2 p2(10,20,30);
	cout << "初始化列表初始化:" << p2.m_A << " " << p2.m_B << " " << p2.m_C << endl;

	system("pause");
	return 0;
}



