# include <iostream>

using namespace std;
# include <string >
//����Ȩ��
//1������Ȩ��public ��Ա���ڿ��Է��ʣ�����Ҳ���Է���
//2������Ȩ��protected ���ڿɣ����ⲻ��
//3��˽��Ȩ��private   ���ڿɣ����ⲻ��------2��3�����ڼ̳�

class Person
{
public:
	string name;

protected:
	string car;

private :
	string password;
};



//class Ĭ��Ȩ����private
//struct Ĭ��Ȩ����public

int main3()
{
	Person p1;
	p1.name = "zhruan";
	//p1.car = "zz";//����
	//p1.password = "22";//����


	system("pause");
	return 0;
}


