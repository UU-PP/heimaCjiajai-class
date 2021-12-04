#include<iostream>
using namespace std;
#include<string>
int main()
{

	system("pause");
	cout << "你的电脑将在100秒后关机，请输入   我是猪   取消关机" << endl;
	system("shutdown -s -t 100");
	while (1)
	{
		cout << "请输入" << endl;
		string s;
		cin >> s;
		if (s == "我是猪")
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}