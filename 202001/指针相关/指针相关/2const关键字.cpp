# include <iostream>
using namespace std;


int main2()
{

	int a = 100;

	//����ָ�룺ָ��ָ���ֵ���ܸģ�Ӧ���ǲ���ͨ��ָ���޸ģ���ָ���ָ����Ը�
	const int *p = &a;
	//����*p = 0;

	cout << a << endl;

	//ָ�볣����ָ��ָ���ܸģ�ָ��ָ���ֵ���Ը�

	int b = 1000;
	int * const q = &b;
	//����b = &a;




	int c = 90;
	const int * const pq = &c;
	system("pause");
	return 0;
}