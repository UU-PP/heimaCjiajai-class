#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector��ֵ����
//����������
//��vector�������и�ֵ
//����ԭ�ͣ�
//vector& operator=��const vector &vec��	���ط��Ų�����
//assign��beg��end����	����begin��end�������е����ݿ�����ֵ������
//assign��n��elem��	��n�� elem������ֵ������

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//vector& operator=��const vector &vec��	���ط��Ų�����
	vector<int> v1;
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	vector<int> v2 = v1;
	printVector(v2);
	//assign��beg��end����	����begin��end�������е����ݿ�����ֵ������
	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	printVector(v3);
	//assign��n��elem��	��n�� elem������ֵ������
	vector<int> v4;
	v4.assign(10, 100);
	printVector(v4);
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
