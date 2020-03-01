# include "manager.h"

Manager::Manager(int id,string name, int dept)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dept;
}

void Manager::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成老板交代的任务并且下发任务给下级" << endl;
}

string Manager::getDeptName()
{
	return string("经理");
}



