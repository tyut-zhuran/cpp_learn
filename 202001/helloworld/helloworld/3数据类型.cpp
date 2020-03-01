# include <iostream>
# include <string>

using namespace std;

int main3()
{

	//short 2byte2
	short a = 1;
	cout << sizeof(a) << endl;
	//int 4bytes
	int b = 1;
	cout << sizeof(b) << endl;
	//long 4
	long c = 1;
	cout << sizeof(long) << endl;
	//long long 8
	long long d = 1;
	cout << sizeof(long long) << endl;


	//float 4 默认6位有效数字
	float e = 3.14f;
	cout << sizeof(e) << endl;
	cout << e << endl;

	//double 8 默认6位有效数字
	double f = 3.1425;
	cout << sizeof(f) << endl;
	cout << f << endl;

	//科学计数法
	float ff = 3e2;
	cout << ff << endl;




	//字符型
	char ch = 'z';
	cout << ch << endl;
	cout << sizeof(ch) << endl;//1
	cout << (int)ch << endl;


	//转义字符
	cout << "\\\tzhuran\nzhuran" << endl;



	//字符串
	char str[] = "zhuranzhuran";
	cout << str << endl;
	string str2 = "ZHURANZHURAN";
	cout << str2 << endl;//需要包含头文件<string>


	//bool
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << sizeof(flag) << endl;//1个字节


	//数据输入
	/*
	int a_in = 0;
	cout << "输入数字a_in：" << endl;
	cin >> a_in;
	cout << a_in << endl;
	*/
	/*
	float f_in = 0;
	cin >> f_in;
	cout << f_in << endl;
	*/

	string str3 = "zhuran";
	cin >> str3;
	cout << str3 << endl;
	system("pause");
	return 0;
}