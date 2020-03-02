#include "declarat.h"

int main()
{
    struct triang* tr;
    int num = 0;
    int i = 0;
    double sumSquare = 0.0;
    char file_name[] = "input.txt";
    FILE * file = fopen(file_name, "r");
    assert(file);
    num = number_of_triangs(file);
    tr = read_data(file, num);
    assert(tr);
    for (i = 0; i < num; i++)
    	sumSquare += tr[i].square;

 
    printf("Summary square of a %d triangles is %lg\n", num, sumSquare);
    closing(file, tr);
    return 0;

}