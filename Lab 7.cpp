// Lab 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include "funcs.h"

int main()
{
	SetConsoleOutputCP(1251);
	const char* menu_items[] =
	{
		"Вывести a и b"
		, "Сложение"
		, "Вычитание"
		, "Умножение"
		, "Выход"
		, NULL
	};
	handler_t handlers[] = {
		tab_handler1
		, tab_handler2
		, tab_handler3
		, tab_handler4
		, tab_handler5
	};
	int idx;
	do {
		idx = menu(menu_items);
		if (idx < 0)
		{
			perror("Error index handler\n");
			return -1;
		}
		if (handlers[idx](NULL))
		{
			perror("Error handling\n");
		}
	} while (idx >= 0);
	getchar();
	return 0;
}
