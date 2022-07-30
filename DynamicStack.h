#pragma once
#include<iostream>
#include<initializer_list>
#include<cassert>

using namespace std;

//size - ������ �� ���� ������������ ����� �����
template<class T, size_t size>
class DynamicStack
{
	T* data = nullptr;
	size_t top = 0;

public:
	DynamicStack() {}
	~DynamicStack();
	DynamicStack(initializer_list<T> list);
	DynamicStack(const DynamicStack& s);
	DynamicStack& operator=(const DynamicStack& s);
	void push(const T& value);
	void pop();
	T peek() const;
	size_t length() const;
	bool isEmpty() const;
	bool isFull() const;
	void clear();
	void print() const;
};

template<class T, size_t size>
DynamicStack<T, size>::~DynamicStack()
{
}

template<class T, size_t size>
DynamicStack<T, size>::DynamicStack(initializer_list<T> list)
{
	for (T l : list)
	{
		push(l);
	}
}

template<class T, size_t size>
DynamicStack<T, size>::DynamicStack(const DynamicStack& s)
{
}

template<class T, size_t size>
void DynamicStack<T, size>::push(const T& value)
{
	if (top < size)
	{
		T* temp = new T[top];

		for (size_t i{}; i < top; i++)
			temp[i] = this->data[i];

		delete[] data;
		top++;

		data = new T[top];

		for (size_t i{}; i < top - 1; i++)
			this->data[i] = temp[i];

		delete[] temp;

		data[top-1] = value;
	}

}

template<class T, size_t size>
void DynamicStack<T, size>::pop()
{
	if (top > 0)
	{
		top--;
	}
}

template<class T, size_t size>
T DynamicStack<T, size>::peek() const
{
	assert(top > 0);
	return data[top - 1];
}

template<class T, size_t size>
size_t DynamicStack<T, size>::length() const
{
	return top;
}

template<class T, size_t size>
bool DynamicStack<T, size>::isEmpty() const
{
	return top == 0;
}

template<class T, size_t size>
bool DynamicStack<T, size>::isFull() const
{
	return top == size;
}

template<class T, size_t size>
void DynamicStack<T, size>::clear()
{
	delete[] data;
	top = 0;
}

template<class T, size_t size>
void DynamicStack<T, size>::print() const
{
	for (size_t i = 0; i < top; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}
