# include <iostream>
using namespace std;

//ռλ����
void func(int a, int)
{
	cout << a << endl;
}

//ռλ������������Ĭ�ϲ���
void func2(int a, int = 20)
{
	cout << a << endl;
}
int main2()
{
	func(2,2);
	func2(3,2);

	system("pause"); 
	return 0;
}









