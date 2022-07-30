#include <iostream>	
#include <Windows.h>
#include "DynamicStack.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	DynamicStack<int, 5> stack{ 10,2,2,3,4,2 };
	DynamicStack<int, 5> stack2;
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
	cout << "�������: " << stack.length() << '\n';
	stack.print();
	cout << "�������: " << stack.length() << '\n';
	stack2 = stack;
	cout << "����2 ���������: " << '\n';
	stack2.print();
	cout << "��������� ������� \n";
	stack2.clear();
	stack2.print();


	return 0;
}