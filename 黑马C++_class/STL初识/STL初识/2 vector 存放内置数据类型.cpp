#include <iostream>
using namespace std;
#include <string>

#include <vector>
#include <algorithm>

void MyPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ����ݵ�����
	vector<int> v;
	//�������д������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ÿ�����������Լ��ĵ��������ڶ����Լ��ĵ�������Ҫ����ȷģ�������Ŷ����������ʹ�������������е�Ԫ�ص�
	//v.Begin()���ص����������������ָ�������е�һ������
	//v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ�ã�
	//vector<int>::iterator�õ�vector<int>���������ĵ���������
	//vector<int>::iterator pBegin = v.begin();
	//vector<int>::iterator pEnd = v.end();

	//��һ�ֱ�����ʽ
	//while (pBegin != pEnd)
	//{
	//	cout << *pBegin << endl;
	//	pBegin++;
	//}

	//�ڶ��ֱ���
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	//�����ֱ�����ʽ
	//ʹ��STL�ṩ��׼�����㷨 ͷ�ļ� algorithm
	for_each(v.begin(), v.end(), MyPrint);
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
