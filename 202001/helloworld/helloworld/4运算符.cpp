# include <iostream>
using namespace std;



int main()
{
	int a = 10;
	int b = 3;
	//��������+-*/
	cout << a / b << endl;//���3
	cout << (float)a / b << endl;//���С��

	//ȡģ���㣬С���޷�ȡģ
	cout << 10 % 3 << endl;
	
	//�����ݼ�
	cout << "�����ݼ�" << endl;
	int c = 1;
	cout << c++ << endl;
	cout << c << endl;

	int d = 1;
	cout << ++d << endl;


	//��ֵ�����
	//+=,-=,*=,/=,%=
	//�Ƚ������
	//==,!=,>,<,<=,>=

	//�߼������
	//!,&&,||
	bool b1 = true;
	bool b2 = false;
	cout << !b1 << endl;
	cout << (b1 && b2) << endl;
	cout << (b1 || b2) << endl;

	cout << bool(10) << endl;
	cout << bool(-1) << endl;
	cout << bool(0) << endl;


	system("pause");
	return 0;
}