#include <stdio.h>

//Спасибо 32BIT Academy!

void array_example()
{
	int array[5] = { 7, 15, 21, 66, 48 };
	int *pointer = &array[0];
	
	printf("array[0]\t= %d\t\t*pointer\t = %d\n", array[0], *pointer);
	printf("&array[0]\t= %d\tpointer\t\t = %d\n", &array[0], pointer);
	printf("array\t\t= %d\tpointer\t\t = %d\n", array, pointer);
	printf("&array\t\t= %d\t&pointer\t = %d\n", &array, &pointer);
	printf("&array[1]\t= %d\tpointer + 1\t = %d\n", &array[1], pointer + 1);
	printf("array[1]\t= %d\t\t*(pointer + 1)\t = %d\n\n\n", array[1], *(pointer + 1));
	
	/*
	for (int i = 0; i < 5; i++)
	{
		printf("array[%d] = %d\n", i, *(pointer + i));
	}
	*/
	
	printf("array[i]   *(pointer + i)   pointer[i]\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%4d\t\t%2d\t\t%2d\n", array[i], *(pointer + i), pointer[i]);
	}
}

/*
Разница в адресах array[0] и array[1] - 4 байта (из-за типа данных int).
Указатель адресуется к инту, так что смещается на: n * размер_типа.

*(pointer + i) и pointer[i] - это одно и то же.
В первом случае прыгаем по адресам, разыменовывая их.
Во втором случае [] - оператор, выполняющий разыменование указателя с заданным сдвигом.
*/