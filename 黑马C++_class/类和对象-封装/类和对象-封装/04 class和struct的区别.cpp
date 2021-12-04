#include<iostream>
using namespace std;

//struct 和 class 区别
//struct 默认的权限public
//class 默认权限是private

class C1
{
	int m_A; //默认权限  是私有
};

struct C2
{
	int m_A; //默认权限  是公共
};
int main()
{
	C1 c1;
	C2 c2;

	//c1.m_A = 1; //在class中默认的权限是私有
	c2.m_A = 2;	//在struct中磨人的权限是公共

	system("pause");

	return 0;
}