#include <stdio.h>
#include <locale.h>
#include "examples\examples.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int task;
    do
    {
        printf("1. Указатели на простом примере. (+ гайд в комментарии)\n"
        "2. Экспериментируем со * и &, смотрим, что будет в консоли.\n"
        "3. Примеры с функциями (передача по значению, передача по указателю).\n"
        "4. Примеры и полезные заметки от мужа.\n"
        "5. \n\n"
        "Что будем делать? (1-5)\n\n");
        scanf_s("%d", &task);
    } while (task < 0 || task > 5);

    switch (task)
    {
    case 1:
        guide();
        break;
    case 2:
        pointers();
        break;
    case 3:
        guide_functions();
        break;
    case 4:
        good_notes();
        break;
    case 5:
        break;
    default:
        break;
    }

    return 0;
}