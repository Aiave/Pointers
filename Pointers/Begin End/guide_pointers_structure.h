#ifndef GUIDE_POINTERS_STRUCTURE
#define GUIDE_POINTERS_STRUCTURE

struct coordinates
{
	int x;
	int y;
};

typedef struct coordinates coordinate;

void print(coordinate point);
void print_by_pointer(coordinate *pointer, int x_position, int y_position);

#endif