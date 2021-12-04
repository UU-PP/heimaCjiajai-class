#include <iostream>
using namespace std;
#include <string>

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();	//��visit�������Է���Building��˽�г�Ա
	void visit2();	//��visit2���������Է���Building��˽�г�Ա
	Building *building;
};

GoodGay::GoodGay()
{
	building = new Building;//new����ָ��
}

void GoodGay::visit()
{
	cout << "visit �������ڷ��ʣ� " << building->m_sittingRoom << endl;
	cout << "visit �������ڷ��ʣ� " << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit �������ڷ��ʣ� " << building->m_sittingRoom << endl;
	cout << "visit �������ڷ��ʣ� " << building->m_BedRoom << endl;
}

class Building
{
	//���߱�����  GoodGayvisit��Ա������Ϊ����ĺ����ѣ����Է���˽�г���Ա
	friend void GoodGay::visit();

public:
	Building();

public:
	string m_sittingRoom;	//����

private:
	string m_BedRoom;	//����
};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_sittingRoom = "����";

		m_BedRoom = "����";
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
