# include <iostream>

using namespace std;



int main1()
{

	int a = 1000;
	int *p = &a;
	cout << a << endl;
	cout << *p << endl;

	//ȫ�����4
	cout << sizeof(int *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;

	//��ָ���Ұָ��

	//��ָ��ָ���ַ0
	int *p1 = NULL;

	//Ұָ����ָ��û��Ȩ�޵ĵ�ַ
	int *p2 = (int *)0x0022;

	//����
	//cout << *p2 << endl;
	system("pause");
	return 0;

}