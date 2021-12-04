#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector�����ɾ��
//����������
//��vector�������в����ɾ��
//����ԭ�ͣ�
//push_back��elem��		β������Ԫelem
//pop_back();		������ָ��λ��pos����Ԫ��ele
//insert��const_iterator pso��ele��	������ָ��λ��pos����elemԪ��
//insert��const_iterator pos��int count��elem��	������ָ��λ��pos����count��Ԫ��
//erase��const_iterator pos��		ɾ��������ָ���Ԫ��
//erase��const_iterator start��const_iterator end��		ɾ����������start��end֮���Ԫ��
//clear����	 ɾ�����������е�Ԫ��

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
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	printVector(v1);

	v1.pop_back();
	printVector(v1);

	v1.insert(v1.begin(), 1000);
	printVector(v1);

	v1.insert(v1.begin(), 3, 1000);
	printVector(v1);

	v1.erase(v1.begin());
	printVector(v1);

	v1.erase(v1.begin(), v1.end());
	printVector(v1);
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
