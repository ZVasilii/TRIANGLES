#include "declarat.h"


int number_of_triangs(FILE* f)
{
	int num = 0;
	fscanf(f, "%d", &num);
	return num;

}

struct triang* read_data(FILE* f, int num)
{
	struct triang* buff;
	int i = 0;
	buff = (struct triang*) calloc(num, sizeof(struct triang));
	assert(buff);
	for (i = 0; i < num; i++)
	{
		fscanf(f, "%lg %lg %lg %lg %lg %lg", &buff[i].x1, &buff[i].y1, &buff[i].x2, &buff[i].y2, &buff[i].x3, &buff[i].y3);
		buff[i].square = count_square(buff + i);
		///printf("Square = %lg\n, number is %d\n", buff[i].square, i);
    }
    return buff;
}

double count_square(struct triang * tr)
{
	double square = 0.5 * ((tr->x1 - tr->x3)*(tr->y2 - tr->y3) - (tr->x2 - tr->x3)*(tr->y1 - tr->y3));
	if (square < 0) 
		square = (-square);
	return square;
}

void closing(FILE* f, struct triang * buff)
{
	free(buff);
	fclose(f);
	buff = NULL;
}

