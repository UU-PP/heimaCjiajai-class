#include <iostream>
using namespace std;

//ȫ�ֺ�������Ԫ
//������
class Building
{
	//goodGayȫ�ֺ����� Building�����ѣ����Է���Building�е�˽�г�Ա
	friend void goodGay(Building *building)

public:
	Building()
	{
		m_SettingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SettingRoom;

private:
	string m_BedRoom;
};

//ȫ�ֺ��� �û���GoodGay
void goodGay(Building *building)
{
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SettingRoom << endl;

	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
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
