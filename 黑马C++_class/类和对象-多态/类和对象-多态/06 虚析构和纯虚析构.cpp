#include <iostream>
using namespace std;
#include <string>

//虚析构和纯虚析构
class Animal
{
public:
	Animal()
	{
		cout << "Animal的构造函数调用" << endl;
	}

	//虚析构
	//利用虚析构可以解决 父类指针释放子类对象时 不干净的问题
	/*virtual ~Animal()
	{
		cout << "Animal的析构函数调用" << endl;
	}*/

	//纯虚析构 需要声明 也需要是实现 而实现是在类外实现哦
	virtual ~Animal() = 0;

	virtual void Speak() = 0;
};

Animal::~Animal()
{
	cout << "Animal的纯虚析构调用" << endl;
};

//猫类
class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat的构造函数调用" << endl;
		m_Name = new string(name);
	}

	~Cat()
	{
		cout << "Cat的析构函数调用" << endl;
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}

	void Speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}

	string * m_Name;
};

void test01()
{
	Animal * animal = new Cat("Tom");
	animal->Speak();
	//父类指针在析构时候 不会调用子类中析构函数 导致子类中如果有堆区属性 会出现内存泄漏
	delete animal;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
