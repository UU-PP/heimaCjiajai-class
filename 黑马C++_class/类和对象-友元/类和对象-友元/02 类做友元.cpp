#include <iostream>
using namespace std;
#include <string>

//类做友元

class Building;
class GoodGay
{
public:
	GoodGay();//无参构造函数

	void visit();//参观函数  访问Building

private:
	Building * building;
};

//构造函数类外实现
GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}

//成员函数类外实现(要加作用域)
void GoodGay::visit()
{
	cout << "好基友正在访问" << building->m_SettingRooom << endl;
}

class Building
{
public:
	Building();

public:
	string m_SettingRooom;

private:
	string m_BedRoom;
};

//类外写成员函数
Building::Building()
{
	m_SettingRooom = "客厅";
		m_BedRoom = "卧室";
}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
