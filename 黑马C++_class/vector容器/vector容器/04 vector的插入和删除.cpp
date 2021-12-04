#include <iostream>
using namespace std;
#include <string>
#include <vector>

//vector插入和删除
//功能描述：
//对vector容器进行插入和删除
//函数原型：
//push_back（elem）		尾部插入元elem
//pop_back();		迭代器指向位置pos插入元素ele
//insert（const_iterator pso，ele）	迭代器指向位置pos插入elem元素
//insert（const_iterator pos，int count，elem）	迭代器指向位置pos插入count个元素
//erase（const_iterator pos）		删除迭代器指向的元素
//erase（const_iterator start，const_iterator end）		删除迭代器从start到end之间的元素
//clear（）	 删除容器中所有的元素

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
