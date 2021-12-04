#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector��������
//����������
//����������������Ԫ�ؽ��л���
//����ԭ��;
//swap��vec����	��vec�뱾���Ԫ�ػ���

void printVector(vector<int>& v)
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
		v1.push_back(i + 1);
	}
	printVector(v1);
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "������" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}

void test02()
{
	vector<int> v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}
	cout << "v��capacityΪ��" << v.capacity() << endl;
	cout << "v��sizeΪ��" << v.size() << endl;

	v.resize(3);
	cout << "v��capacityΪ��" << v.capacity() << endl;
	cout << "v��sizeΪ��" << v.size() << endl;

	//�����ڴ�
	vector<int>(v).swap(v);
	cout << "v��capacityΪ��" << v.capacity() << endl;
	cout << "v��sizeΪ��" << v.size() << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
