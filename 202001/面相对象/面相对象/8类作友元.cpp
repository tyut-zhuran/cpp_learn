//# include <iostream>
//using namespace std;
//# include <string >
//
//class Building
//{
//	friend class GoodGay;
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
//
//class GoodGay
//{
//public :
//	GoodGay()
//	{
//		build = new Building;
//	}
//	void visit()
//	{
//		cout << build->m_SittingRoom << endl;
//		cout << build->m_BedRoom << endl;
//	};//访问Building类中的私有属性
//	Building *build;
//};
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//
