#include <iostream>
using namespace std;
#include <string>

//string插入和删除
//功能描述：
//对string字符串进行插入和删除字符操作
//函数原型
//string& insert（int pos，const char* s）；	插入字符串s
//string& insert（int pos，const string& str）；	插入字符串str
//string& insert（int pos，int n，char c）；	在指定位置插入n个字符c
//string& erase（int pos，int n = npos）；	删除从pos开始的n个字符

void test01()
{
	//string& insert（int pos，const char* s）；	插入字符串s
	string str1 = "hello";
	str1.insert(1, "11111");
	cout << str1 << endl;
	//string& insert（int pos，const string& str）；	插入字符串str
	string str2 = "00000";
	str1.insert(1, str2);
	cout << str1 << endl;
	//string& insert（int pos，int n，char c）；	在指定位置插入n个字符c
	str1.insert(1, 4, '=');
	cout << str1 << endl;
	//string& erase（int pos，int n = npos）；	删除从pos开始的n个字符
	str1.erase(1, 4);
	cout << str1 << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
