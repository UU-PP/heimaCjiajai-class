#include<iostream>
using namespace std;

//struct �� class ����
//struct Ĭ�ϵ�Ȩ��public
//class Ĭ��Ȩ����private

class C1
{
	int m_A; //Ĭ��Ȩ��  ��˽��
};

struct C2
{
	int m_A; //Ĭ��Ȩ��  �ǹ���
};
int main()
{
	C1 c1;
	C2 c2;

	//c1.m_A = 1; //��class��Ĭ�ϵ�Ȩ����˽��
	c2.m_A = 2;	//��struct��ĥ�˵�Ȩ���ǹ���

	system("pause");

	return 0;
}