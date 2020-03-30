#pragma once

///#ifndef DECLARAT_H
///#define DECLARAT_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct triang
{
	double x1;
	double y1;
	double x2;
	double y2;
	double x3;
	double y3;



	double square;
};


struct triang* read_data(FILE* f, int num);
int number_of_triangs(FILE* f);
void closing(FILE* f, struct triang * buff);
double count_square(struct triang * tr);


///#endif  /*DECLARAT_H*/
