# include <iostream>
using namespace std;

//����ʵ����ָ�볣����ָ�����õı���
//�����ò���ʱ�ڲ��Զ�������

//������Ϊ��������ֵע�ⲻ�ܷ��غ����оֲ�����������
int& test()
{
	static int a = 10;//��̬������ȫ������������������ʧ
	return a;
}
int main3()
{

	int &a = test();
	cout << a << endl;
	cout << a << endl;
	test() = 20;//�������ص������ã���ô�ú����ĵ��ÿ�����Ϊ��ֵ
	cout << a << endl;
	cout << a << endl;
	system("pause");
	return 0;
}











