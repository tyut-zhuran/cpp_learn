# include <iostream>
using namespace std;

void func(int a)
{
	cout << "int " << endl;
}
void func(double a)
{
	cout << "double " << endl;
}
//ע������1��������������func(int &a)��func(const int &a)
//				��ô�����int a = 10;func(a)ʱ���õ�һ������func(10)���õڶ���
//ע������2��func(int a)��func(int a, int b =10)
//				��ô����ʱ�����Ӧ��������

int main()
{

	func(3);
	func(3.22);
	system("pause");
	return 0;
}







