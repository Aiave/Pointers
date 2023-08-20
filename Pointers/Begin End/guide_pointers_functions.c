#include <stdio.h>
#include "guide_pointers_functions.h"

//Спасибо Begin End!

void guide_functions()
{
	int number = 7;
	number = function(number);
	procedure(&number);
	printf("%d", number);
}

int function(int a)
{
	return a + 1;
}

void procedure(int* x)
{
	if (x != NULL)
		*x = *x + 1;
}

/*
Передача по значению: при вызове функции function значение number копируется в переменную a

int function(int a)
{
	return a + 1;
}

void guide_functions()
{
	int number = 7;
	number = function(number);
	printf("%d", number);
}
*/

/*
Передача по указателю: принимает на входе указатель на целый тип
Увеличиваем значение по адресу указателя x на 1 (* - оператор обращения по адресу)
Для этого, вызывая функцию, используем &, чтобы передать адрес переменной, которая записывается в указатель x (& - операция взятия адреса)

void procedure(int* x)
{
	if (x != NULL)
		*x = *x + 1;
}

void guide_functions()
{
	int number = 7;
	number = function(number);
	procedure(&number);
	printf("%d", number);
}
*/