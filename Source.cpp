#include <iostream>	
#include <Windows.h>
#include "DynamicStack.h"



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	DynamicStack<int, 25> stack{ 10,2,2,3,4,233 };
	
	//stack.print();


	return 0;
}