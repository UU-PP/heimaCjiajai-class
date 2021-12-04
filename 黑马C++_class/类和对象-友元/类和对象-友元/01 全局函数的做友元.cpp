#include <iostream>
using namespace std;

//全局函数做友元
//建筑类
class Building
{
	//goodGay全局函数是 Building好朋友，可以访问Building中的私有成员
	friend void goodGay(Building *building)

public:
	Building()
	{
		m_SettingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SettingRoom;

private:
	string m_BedRoom;
};

//全局函数 好基友GoodGay
void goodGay(Building *building)
{
	cout << "好基友全局函数 正在访问：" << building->m_SettingRoom << endl;

	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	Building *b;
	goodGay(b);
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
