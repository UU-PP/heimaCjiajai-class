#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector��������
//���ܣ�
//vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������

//vector����ͨ���������
//��֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ

//��̬��չ��
//��������ԭ�ռ�֮������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��Ԫ���ݿ����¿ռ䣬�ͷ�Դ�ռ�
//vector�����ĵ�������֧��������ʵĵ�����

//vector���캯��
//����������
//����vector����

//����ԭ�ͣ�
//vector<T> v; ����ģ��ʵ���࣬Ĭ�Ϲ��캯��
//vector��v.begin(),v.end()��; ��v[begin(),end()]�����е�Ԫ�ؿ���������
//vector��n��elem��	���캯����n��elem����������
//vectir��const vector &vec��	�������캯��

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
	//vector<T> v; ����ģ��ʵ���࣬Ĭ�Ϲ��캯��
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	//vector��v.begin(),v.end()��; ��v[begin(),end()]�����е�Ԫ�ؿ���������
	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);
	//vector��n��elem��	���캯����n��elem����������
	vector<int> v3(10, 100);
	printVector(v3);
	//vectir��const vector &vec��	�������캯��
	vector<int> v4(v3);
	printVector(v4);
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
