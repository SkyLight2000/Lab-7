#include "stdafx.h"
#include "Complex.h"
#include "funcs.h"

Complex a(5, 2);
Complex b(3, -3);

int menu(const char* menu_items[])
{
	int n;
	for (n = 0; menu_items[n]; ++n)
	{
		printf("\t[%d]. %s\n", n, menu_items[n]);
	}

	int i = -1;
	printf("\tChoice: ");
	if (scanf("%d", &i) == 1)
	{
		if (i >= 0 && i < n)
		{
			return i;
		}
	}
	return i;
}

int tab_handler1(void* p) {
	return view();
}

int tab_handler2(void* p) {
	return sum();
}

int tab_handler3(void* p) {
	return sub();
}

int tab_handler4(void* p) {
	return mult();
}

int tab_handler5(void* p) {
	return exit();
}

int view() {
	cout << "a = " << a << "; b =" << b << endl;
	return 0;
}

int sum() {
	cout << a + b << endl;
	return 0;
}

int sub() {
	cout << a - b << endl;
	return 0;
}

int mult() {
	cout << a * b << endl;
	return 0;
}

int exit() {
	exit(EXIT_SUCCESS);
}
