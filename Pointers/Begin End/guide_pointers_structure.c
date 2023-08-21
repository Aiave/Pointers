#include <stdio.h>

//Спасибо Begin End!

struct coordinates
{
	int x;
	int y;
};

typedef struct coordinates coordinate;

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
*/