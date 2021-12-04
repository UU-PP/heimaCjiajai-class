#include <iostream>
using namespace std;
#include <string>

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();	//让visit函数可以访问Building中私有成员
	void visit2();	//让visit2函数不可以访问Building中私有成员
	Building *building;
};

GoodGay::GoodGay()
{
	building = new Building;//new返回指针
}

void GoodGay::visit()
{
	cout << "visit 函数正在访问： " << building->m_sittingRoom << endl;
	cout << "visit 函数正在访问： " << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit 函数正在访问： " << building->m_sittingRoom << endl;
	cout << "visit 函数正在访问： " << building->m_BedRoom << endl;
}

class Building
{
	//告诉编译器  GoodGayvisit成员函数作为本类的好朋友，可以访问私有车成员
	friend void GoodGay::visit();

public:
	Building();

public:
	string m_sittingRoom;	//客厅

private:
	string m_BedRoom;	//卧室
};

//类外实现成员函数
Building::Building()
{
	m_sittingRoom = "客厅";

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
