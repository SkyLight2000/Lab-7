#pragma once
typedef int(*handler_t)(void*);
int menu(const char*[]);
int tab_handler1(void* p);
int tab_handler2(void* p);
int tab_handler3(void* p);
int tab_handler4(void* p);
int tab_handler5(void* p);
int view();
int sum();
int sub();
int mult();
int exit();
