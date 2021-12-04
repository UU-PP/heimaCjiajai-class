#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//有参构造
	MyArray(int capicity)
	{
		//cout << "有参构造的调用" << endl;
		this->m_Capicity = capicity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capicity];
	}

	//拷贝构造
	MyArray(const MyArray &array)
	{
		//cout << "k拷贝构造的调用" << endl;
		/*if (this->pAddrress != NULL)
		{
		this->m_Capicity = 0;
		this->m_Size = 0;
		delete[] this->pAddrress;
		this->pAddrress = NULL;
		}*/
		this->m_Capicity = array.m_Capicity;
		this->m_Size = array.m_Size;
		this->pAddress = new T[array.m_Capicity];

		for (int i = 0; i < array.m_Size; i++)
		{
			//如果T为对象，而且还包括指针，必须需要重载=操作符，因为这个等号不是构造而是复制
			//普通类型可以直接= 但是指针类型需要深度拷贝
			this->pAddress[i] = array.pAddress[i];
		}
	}
	//重载= 操作符 防止亲拷贝
	MyArray& operator=(const MyArray& array)
	{
		//cout << "=操作符的调用" << endl;
		if (this->pAddress != NULL)
		{
			this->m_Capicity = 0;
			this->m_Size = 0;
			//用 new[] 分配的内存需要用 delete[] 释放，它们是一一对应的。
			delete[] this->pAddress;
			//this->pAddrress = NULL;
		}
		this->m_Capicity = array.m_Capicity;
		this->m_Size = array.m_Size;
		this->pAddress = new T[array.m_Capicity];
		for (int i = 0; i < array.m_Size; i++)
		{
			//如果T为对象，而且还包括指针，必须需要重载=操作符，因为这个等号不是构造而是复制
			//普通类型可以直接= 但是指针类型需要深度拷贝
			this->pAddress[i] = array.pAddress[i];
		}
		return *this;
	}

	//重载[] 操作符 arr[0]
	//返回值一定是引用
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//尾插法
	void pushBack(const T  &val)
	{
		if (this->m_Size == this->m_Capicity)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//尾删法
	void popBack()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}
	//获取数组容量
	int getCapicity()
	{
		return this->m_Capicity;
	}
	//获取数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构
	~MyArray()
	{
		//cout << "析构的调用" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Size = 0;
			this->m_Capicity = 0;
		}
	}
private:
	int m_Capicity;//容量
	int m_Size;//大小
	T* pAddress;//指向一个堆空间，这个空间存储真正的数据
};