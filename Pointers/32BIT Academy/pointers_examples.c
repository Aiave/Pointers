﻿#include <stdio.h>

//Спасибо 32BIT Academy!

void pointers()
{

    int *p;
    int a = 5;
    p = &a;

    printf("1. То, что лежит в ячейке:\n");
    printf("a = %d\n\n", a);
    printf("2. То, что лежит в p, т.е. адрес a:\n");
    printf("p = %d\n\n", p);
    printf("3. Адрес ячейки a (его же записывали в p):\n");
    printf("&a = %d\n\n", &a);
    printf("4. Разыменовываем адрес в указателе p, получаем доступ к ячейке, в которой лежит переменная a, получаем её значение:\n");
    printf("*p = %d\n\n", *p);
    printf("5. Получаем адрес ячейки указателя p:\n");
    printf("&p = %d\n\n", &p);
    printf("6. Разыменовываем адрес, получаем, что хранится в p (т.е. адрес ячейки a):\n");
    printf("*(&p) = %d\n\n", *(&p));
    printf("7. Разыменовываем дважды. Сначала получаем адрес, лежащий в p (т.е. адрес ячейки a), прыгаем по этому адресу, затем\nразыменовываем и его, получаем то, что содержится в ячейке a:\n");
    printf("*(*(&p)) = %d\n\n", *(*(&p)));
}