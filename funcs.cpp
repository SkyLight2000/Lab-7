#include "stdafx.h"
#include "Complex.h"
#include "funcs.h"

Complex a(5, 2);
Complex b(3, -3);

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