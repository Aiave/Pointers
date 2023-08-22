#include <stdio.h>
#include "guide_pointers_structure.h"

//Спасибо Begin End!

void guide_structure()
{
	/*
	coordinate coord;
	coord.x = 3;
	coord.y = 7;
	printf("x = %d\ny = %d\n", coord.x, coord.y);
	*/

	coordinate coord;
	coordinate *pointer = NULL;

	pointer = &coord;
	if (pointer != NULL)
	{
		(*pointer).x = 22;
		(*pointer).y = 55;
		printf("x = %d\ny = %d\n", coord.x, coord.y);
	}

	print(*pointer);
	print_by_pointer(pointer, 11, 12);
}

void print(coordinate point)
{
	printf("\nx = %d\ny = %d\n", point.x, point.y);
}

void print_by_pointer(coordinate* pointer, int x_position, int y_position)
{
	if (pointer != NULL)
	{
		(*pointer).x = x_position;
		(*pointer).y = y_position;
		printf("\nx = %d\ny = %d\n", x_position, y_position);
	}
}

/*
Переменные x, y - поля структуры.
struct coordinates
{
	int x;
	int y;
};

Создаём новый тип данных на основе структуры (структурный).
typedef struct coordinates coordinate;

Создаём переменную этого типа.
coordinate coord; coord

Присваиваем значения полям структуры и выводим их на экран.
coord.x = 3;
coord.y = 7;
printf("x = %d\ny = %d\n", coord.x, coord.y);

Создаём указатель на нашу структуру и указываем на переменную coord. Меняем значения полей с помощью указателя.
Оператор . - обращение к полям структуры. Имеет более высокий приоритет, чем *, поэтому ставим скобки ((*pointer).x, (*pointer).y).

В примере:
1. Обратились по адресу указателя, получили доступ к переменной coord, которая является структурой. (*pointer)
2. После этого обращаемся к переменным внутри структуры и меняем их значения. ((*pointer).x, (*pointer).y)

Передавать структуры в функции и процедуры можно также, как обычные переменные.

Передача по значению (копируется из coord в point при передаче в функцию):
void print(coordinate point)
{
	printf("\nx = %d\ny = %d\n", point.x, point.y);
}

Передача по указателю используется, когда нужно изменить значение самой переменной coord.
Указатель *pointer уже содержит адрес переменной coord, поэтому на вход можно передать его.
Было:
print_by_pointer(&coord, 11, 12);
Стало:
print_by_pointer(pointer, 11, 12);

При вызове процедуры print можно тоже использовать указатель.
Было:
print(coord);
Стало:
print(*pointer);
Работает так: сначала переходим по адресу указателя, получаем значение переменной coord, которое и было передано до этого.
*/