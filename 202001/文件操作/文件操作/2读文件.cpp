//# include <iostream>
//using namespace std;
//# include <string>
//
//
//# include <fstream>
//
//
//
//void test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt",ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败！" << endl;
//		return;
//	}
//	//char buf[1024] = {0};
//	/*while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	/*while (ifs.getline(buf, sizeof(buf))) 
//	{
//		cout << buf << endl;
//	}*/
//
//
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//
//	/*char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}*/
//
//	ifs.close();
//
//
//}
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
