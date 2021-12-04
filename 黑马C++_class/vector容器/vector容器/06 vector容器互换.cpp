#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector容器互换
//功能描述：
//是吸纳两个容器内元素进行互换
//函数原型;
//swap（vec）；	将vec与本身的元素互换

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

	cout << "交换后" << endl;
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
	cout << "v的capacity为：" << v.capacity() << endl;
	cout << "v的size为：" << v.size() << endl;

	v.resize(3);
	cout << "v的capacity为：" << v.capacity() << endl;
	cout << "v的size为：" << v.size() << endl;

	//收缩内存
	vector<int>(v).swap(v);
	cout << "v的capacity为：" << v.capacity() << endl;
	cout << "v的size为：" << v.size() << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
