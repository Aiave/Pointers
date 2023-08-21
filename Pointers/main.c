#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "32BIT Academy/32bit_academy.h"
#include "Begin End/begin_end.h"
#include "Good Notes/good_notes.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int task;
    do
    {
        printf("32BIT Academy\n"
            "1. Экспериментируем со * и &, смотрим, что будет в консоли.\n"
            "2. Чтение числа по байтам.\n"
            "3. Экспериментируем с массивом.\n\n"
            "Begin End\n"
            "4. Указатели на простом примере. (+ гайд в комментарии)\n"
            "5. Примеры с функциями (передача по значению, передача по указателю).\n\n"
            "Good Notes\n"
            "6. Примеры и полезные заметки от мужа.\n\n"
            "Что будем делать? (1-6)\n");
        scanf_s("%d", &task);
    } while (task < 0 || task > 6);

    switch (task)
    {
    case 1:
        system("cls");
        pointers();
        break;
    case 2:
        system("cls");
        number_by_bytes();
        break;
    case 3:
        system("cls");
        array_example();
        break;
    case 4:
        system("cls");
        guide();
        break;
    case 5:
        system("cls");
        guide_functions();
        break;
    case 6:
        system("cls");
        good_notes();
        break;
    default:
        break;
    }

    return 0;
}