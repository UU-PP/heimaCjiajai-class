#include <iostream>
using namespace std;
#include <string>

//string字符串拼接
//函数原型
//string& operator+=（const char* str）	重载+=操作符
//string& operator+=（const char c）	重载+=操作符
//string& operator+=（const string& str）	重载+= 操作符
//string& append（const char *s）	把字符串s连接到当前字符串结尾
//string& append（const char *s，int n） 把字符串s的前n个字符连接到当前字符串结尾
//string& append（const string &s）	
//string& append（const string &s，int pos，int n） 字符串s中从pos开始的n个字符连接到字符串结尾

void test01()
{
	//string& operator+=（const char* str）	重载+=操作符
	string s1;
	s1 += "I love ";
	cout << "s1 = " << s1 << endl;
	//string& operator+=（const char c）	重载+=操作符
	s1 += ':';
	cout << "s1 = " << s1 << endl;
	//string& operator+=（const string& str）	重载+= 操作符
	string s2("you");
	s1 += s2;
	cout << "s1 = " << s1 << endl;
	//string& append（const char *s）	把字符串s连接到当前字符串结尾
	s1 = "I love :";
	string s3 = s1;
	s3.append("game");
	cout << "s3 = " << s3 << endl;
	//string& append（const char *s，int n） 把字符串s的前n个字符连接到当前字符串结尾
	string s4 = s1;
	s4.append("hello ketty", 5);
	cout << "s4 = " << s4 << endl;
	//string& append（const string &s）	
	string s5 = s1;
	s5.append(s2);
	cout << "s5 = " << s5 << endl;
	//string& append（const string &s，int pos，int n） 字符串s中从pos开始的n个字符连接到字符串结尾
	string s6 = s1;
	s6.append("hello ketty", 5, 5);
	cout << "s6 = " << s6 << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
