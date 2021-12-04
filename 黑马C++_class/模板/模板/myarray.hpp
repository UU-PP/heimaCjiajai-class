#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//�вι���
	MyArray(int capicity)
	{
		//cout << "�вι���ĵ���" << endl;
		this->m_Capicity = capicity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capicity];
	}

	//��������
	MyArray(const MyArray &array)
	{
		//cout << "k��������ĵ���" << endl;
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
			//���TΪ���󣬶��һ�����ָ�룬������Ҫ����=����������Ϊ����ȺŲ��ǹ�����Ǹ���
			//��ͨ���Ϳ���ֱ��= ����ָ��������Ҫ��ȿ���
			this->pAddress[i] = array.pAddress[i];
		}
	}
	//����= ������ ��ֹ�׿���
	MyArray& operator=(const MyArray& array)
	{
		//cout << "=�������ĵ���" << endl;
		if (this->pAddress != NULL)
		{
			this->m_Capicity = 0;
			this->m_Size = 0;
			//�� new[] ������ڴ���Ҫ�� delete[] �ͷţ�������һһ��Ӧ�ġ�
			delete[] this->pAddress;
			//this->pAddrress = NULL;
		}
		this->m_Capicity = array.m_Capicity;
		this->m_Size = array.m_Size;
		this->pAddress = new T[array.m_Capicity];
		for (int i = 0; i < array.m_Size; i++)
		{
			//���TΪ���󣬶��һ�����ָ�룬������Ҫ����=����������Ϊ����ȺŲ��ǹ�����Ǹ���
			//��ͨ���Ϳ���ֱ��= ����ָ��������Ҫ��ȿ���
			this->pAddress[i] = array.pAddress[i];
		}
		return *this;
	}

	//����[] ������ arr[0]
	//����ֵһ��������
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//β�巨
	void pushBack(const T  &val)
	{
		if (this->m_Size == this->m_Capicity)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	//βɾ��
	void popBack()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}
	//��ȡ��������
	int getCapicity()
	{
		return this->m_Capicity;
	}
	//��ȡ�����С
	int getSize()
	{
		return this->m_Size;
	}

	//����
	~MyArray()
	{
		//cout << "�����ĵ���" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Size = 0;
			this->m_Capicity = 0;
		}
	}
private:
	int m_Capicity;//����
	int m_Size;//��С
	T* pAddress;//ָ��һ���ѿռ䣬����ռ�洢����������
};