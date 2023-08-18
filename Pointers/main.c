#include <stdio.h>
#include <locale.h>
#include "examples\examples.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    guide();
    pointers();

    return 0;
}