#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector������С
//����������
//��vector�����������ʹ�С����
//����ԭ��:
//empty����	�ж������Ƿ�Ϊ��
//capacity����	����������
//size(int num)	����ָ�������ĳ���num���������䳤������Ĭ��ֵ�����λ��
//			���������̣���ĩβ �����������ȵ�Ԫ��ɾ��
//resize��int num, elem��	����ָ�������ĳ���Ϊnum���������䳤������elem��ֵ�����λ��
//				���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (!v1.empty())
	{
		cout << "�ǿ�" << endl;
		cout << "v1������" << v1.capacity() << endl;
		cout << "v1��С��" << v1.size() << endl;
	}
	else
	{
		cout << "��" << endl;
	}

	v1.resize(15);
	printVector(v1);
	cout << "v1������" << v1.capacity() << endl;
	cout << "v1��С��" << v1.size() << endl;
	cout << "----------------" << endl;

	v1.resize(16, 100111);
	printVector(v1);
	cout << "v1������" << v1.capacity() << endl;
	cout << "v1��С��" << v1.size() << endl;

	v1.resize(5);
	printVector(v1);
	cout << "v1������" << v1.capacity() << endl;
	cout << "v1��С��" << v1.size() << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
