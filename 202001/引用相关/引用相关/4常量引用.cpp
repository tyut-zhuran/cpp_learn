# include <iostream>
using namespace std;

//��ֹ�����
void showValue(const int &value)
{

	cout << value << endl;
}


int main()
{

	//�������ã����������βΣ���ֹ�����
	const int& ref = 10;//�������޸ģ�int temp = 10; const int &ref = temp;
	//ref = 20;//��������const���κ�ֻ���������޸�

	int a = 100;
	showValue(a);


	system("pause");
	return 0;
}










