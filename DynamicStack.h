#pragma once
#include<iostream>
#include<initializer_list>
#include<cassert>

using namespace std;

//size - мається на увазі максимальний розмір стеку
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
}

template<class T, size_t size>
DynamicStack<T, size>::DynamicStack(const DynamicStack& s)
{
}

template<class T, size_t size>
DynamicStack& DynamicStack<T, size>::operator=(const DynamicStack& s)
{
	// TODO: вставьте здесь оператор return
}

template<class T, size_t size>
void DynamicStack<T, size>::push(const T& value)
{
}

template<class T, size_t size>
void DynamicStack<T, size>::pop()
{
}

template<class T, size_t size>
T DynamicStack<T, size>::peek() const
{
	return T();
}

template<class T, size_t size>
size_t DynamicStack<T, size>::length() const
{
	return size_t();
}

template<class T, size_t size>
bool DynamicStack<T, size>::isEmpty() const
{
	return false;
}

template<class T, size_t size>
bool DynamicStack<T, size>::isFull() const
{
	return false;
}

template<class T, size_t size>
void DynamicStack<T, size>::clear()
{
}

template<class T, size_t size>
void DynamicStack<T, size>::print() const
{
}
