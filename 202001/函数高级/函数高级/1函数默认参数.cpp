# include <iostream>
using namespace std;


void func(int a, int b = 10, int c = 20)
{
	cout << a + b + c << endl;
}

//���������Ĭ�ϲ�������ôʵ�־Ͳ�������
//����˵������ʵ��ֻ����һ������Ĭ�ϲ���


int main1()
{
	
	func(20,20,20);
	func(10);
	system("pause");
	return 0;
}









