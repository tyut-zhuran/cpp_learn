# include "boss.h"


Boss::Boss(int id,string name,int dept)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dept;
}

void Boss::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t\t��λ��" << this->getDeptName()
		<< "\t��λְ�𣺸���������" << endl;
}
string Boss::getDeptName()
{
	return string("�ϰ�");
}




