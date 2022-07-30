#pragma once
#include<iostream>
#include<initializer_list>
#include<cassert>

using namespace std;

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