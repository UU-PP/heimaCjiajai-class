#include <iostream>
using namespace std;
#include <string>

//������Ԫ

class Building;
class GoodGay
{
public:
	GoodGay();//�޲ι��캯��

	void visit();//�ιۺ���  ����Building

private:
	Building * building;
};

//���캯������ʵ��
GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

//��Ա��������ʵ��(Ҫ��������)
void GoodGay::visit()
{
	cout << "�û������ڷ���" << building->m_SettingRooom << endl;
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

//����д��Ա����
Building::Building()
{
	m_SettingRooom = "����";
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
