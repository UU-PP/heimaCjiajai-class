#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector赋值操作
//功能描述：
//给vector容器进行赋值
//函数原型：
//vector& operator=（const vector &vec）	重载符号操作符
//assign（beg，end）；	将【begin，end）区间中的数据拷贝赋值给本身
//assign（n，elem）	将n个 elem拷贝赋值给本身

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
	//vector& operator=（const vector &vec）	重载符号操作符
	vector<int> v1;
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	vector<int> v2 = v1;
	printVector(v2);
	//assign（beg，end）；	将【begin，end）区间中的数据拷贝赋值给本身
	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	printVector(v3);
	//assign（n，elem）	将n个 elem拷贝赋值给本身
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
