#include <iostream>
using namespace std;
#include <string>

//string的复制操作
//赋值的函数原型
//string& operator=（const char* s）；	char*类型的字符串赋值给当前的字符串
//string& operator=（const string &s）；	把字符串s赋给当前的字符串
//string& operator=（char c）；	字符赋值给当前的字符串
//string& assign（const char *s）；	字符串s赋值给当前的字符串
//string& assign（const char *s，int n）；	把字符串s的前n个字符串赋给当前的字符串
//string& assign（const string &s）；	把字符串s赋给当前字符串
//string& assign（int n，char c）；	用n个字符c赋值给当前字符串

void test01()
{
	//string& operator=（const char* s）；	char*类型的字符串赋值给当前的字符串
	string s1;
	s1 = "helloworld";
	cout << "s1 = " << s1 << endl;
	//string& operator=（const string &s）；	把字符串s赋给当前的字符串
	string s2;
	s2 = s1;
	cout << "s2 = " << s2 << endl;
	//string& operator=（char c）；	字符赋值给当前的字符串
	string s3;
	s3 = 'e';
	cout << "s3 = " << s3 << endl;
	//string& assign（const char *s）；	字符串s赋值给当前的字符串
	string s4;
	s4.assign("hello C++");
	cout << "s4 = " << s4 << endl;
	//string& assign（const char *s，int n）；	把字符串s的前n个字符串赋给当前的字符串
	string s5;
	s5.assign("hello C++", 5);
	cout << "s5 = " << s5 << endl;
	//string& assign（const string &s）；	把字符串s赋给当前字符串
	string s6;
	s6.assign(s5); 
	cout << "s6 = " << s6 << endl;
	//string& assign（int n，char c）；	用n个字符c赋值给当前字符串
	string s7;
	s7.assign(10, '3');
	cout << "s7 = " << s7 << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
