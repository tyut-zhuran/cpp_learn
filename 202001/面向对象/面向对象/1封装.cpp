# include <iostream>
using namespace std;
# define PI 3.14

	
class Circle
{
public:
	int r;//�뾶
	double calculateZC()
	{
		return 2 * PI*r;
	}
};//��װ�������������Ժͷ�����һ����

int main1()
{
	Circle cl;
	cl.r = 10;
	cout << "�ܳ���" << cl.calculateZC() << endl;

	system("pause");
	return 0;
}