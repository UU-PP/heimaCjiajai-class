#include <iostream>
using namespace std;

//�����������
//1��������������
//2���������
//3�������Ϊ ��ȡ��������������
//4���ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����

class Cube
{
public:
	//���ó�
	void serL(int l)
	{
		m_L = l;
	}

	//��ȡ��
	int getL()
	{
		return m_L;
	}

	//���ø�
	void serH(int h)
	{
		m_H = h;
	}

	//��ȡ��
	int getH()
	{
		return m_H;
	}

	//���ÿ�
	void serW(int w)
	{
		m_W = w;
	}

	//��ȡ��
	int getW()
	{
		return m_W;
	}

	//��ȡ����������
	int calculateS()
	{
		return 2 * m_L*m_W + 2 * m_W*m_H + 2 * m_H*m_L;
	}

	//��ȡ����������
	int calculateV()
	{
		return m_L*m_W*m_H;
	}

	//���ó�Ա�������ж������������Ƿ����
	bool isSameByClass(Cube &c)
	{
		if ((m_H == c.getH()) && (m_L == c.getL()) && (m_W == c.getW()))
			return true;
		else
			return false;
	}

private:
	//��
	int m_L;
	//��
	int m_H;
	//��
	int m_W;
};

//��ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube &c1, Cube &c2)
{
	if ((c1.getH() == c2.getH()) && (c1.getL() == c2.getL()) && (c1.getW() == c2.getW()))
		return true;
	else
		return false;
}

int main(void)
{
	//����������Ķ���
	Cube c1;
	c1.serL(10);
	c1.serW(10);
	c1.serH(10);

	//������һ�����������
	Cube c2;
	c2.serL(11);
	c2.serW(10);
	c2.serH(10);

	cout << "������c1�����Ϊ�� " << c1.calculateS() << endl;
	cout << "������c1�����Ϊ�� " << c1.calculateV() << endl;

	//��ȫ�ֺ����ж������������Ƿ����
	if (isSame(c1, c2))
	{
		cout << "�������������" << endl;
	}
	else
	{
		cout << "���������岻��" << endl;
	}

	//�ó�Ա�����ж������������Ƿ����
	if (c1.isSameByClass(c2))
	{
		cout << "��Ա�����жϣ� �������������" << endl;
	}
	else
	{
		cout << "��Ա�����жϣ� ���������岻��" << endl;
	}

	system("pause");

	return 0;
}
