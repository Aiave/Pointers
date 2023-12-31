﻿#include <stdio.h>

//Спасибо 32BIT Academy!

void number_by_bytes()
{
	int number = 464701; //0*256^3 + 7*256^2 + 23*256 + 61
	int *pointer = &number;

	char *byte = (char *)pointer;
	printf("%x\n", *byte);
	byte++;
	printf("%x\n", *byte);
	byte++;
	printf("%x\n", *byte);
	byte++;
	printf("%x\n", *byte);
}

/*
По сути, эта разбивка показывает, как в двоичном коде будет храниться это число:
int number = 464701; //0*256^3 + 7*256^2 + 23*256 + 61
61, 23, 7, 0

С точки зрения любой адрес це адрес, т.е. номер байта. С точки зрения языка - любой адрес типизирован, так что делаем преобразование.

Указатель - число. А если число, значит к нему применимы все арифметические действия.
Читаем по байту (16-ричная = 10-тичная):
3D = 61
17 = 23
7  =  7
0  =  0
*/