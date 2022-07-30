#include <iostream>	
#include <Windows.h>
#include "DynamicStack.h"



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	DynamicStack<int, 4> stack{ 10,2,2,3,4,2 };
	stack.print();
	stack.push(1111);
	stack.print();
	stack.push(0);
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.print();
	cout << stack.peek() << endl;
	stack.pop();
	stack.pop();
	stack.print();

	stack.push(99);
	stack.push(99);
	stack.print();
	cout << stack.peek() << endl;
	cout << "Довжина: " << stack.length() << '\n';
	stack.clear();
	stack.print();
	cout << "Довжина: " << stack.length() << '\n';


	return 0;
}