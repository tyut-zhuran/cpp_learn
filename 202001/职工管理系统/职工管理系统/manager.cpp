# include "manager.h"

Manager::Manager(int id,string name, int dept)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dept;
}

void Manager::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t\t��λ��" << this->getDeptName()
		<< "\t��λְ������ϰ彻�����������·�������¼�" << endl;
}

string Manager::getDeptName()
{
	return string("����");
}



