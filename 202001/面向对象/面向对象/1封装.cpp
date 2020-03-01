# include <iostream>
using namespace std;
# define PI 3.14

	
class Circle
{
public:
	int r;//半径
	double calculateZC()
	{
		return 2 * PI*r;
	}
};//封装的意义在于属性和方法在一起了

int main1()
{
	Circle cl;
	cl.r = 10;
	cout << "周长：" << cl.calculateZC() << endl;

	system("pause");
	return 0;
}