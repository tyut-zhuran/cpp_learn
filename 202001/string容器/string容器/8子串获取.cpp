# include <iostream>
using namespace std;
# include <string>

void test01()
{


	string str = "zhruan";
	cout << str.substr(2, 5) << endl;//Á½¸öË÷Òý


	string str2 = "zhruanzhuran@qq.com";
	cout << str2.substr(0, str2.rfind('@')) << endl;
}


int main()
{

	test01();
	system("pause");
	return 0;
}


