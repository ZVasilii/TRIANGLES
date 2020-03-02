#include "declarat.h"

int main()
{
    struct triang* tr;
    int num = 0;
    int i = 0;
    double maxSquare = 0.0;
    int maxI = 0;
    char file_name[] = "input.txt";
    FILE * file = fopen(file_name, "r");
    assert(file);
    num = number_of_triangs(file);
    tr = read_data(file, num);
    assert(tr);

    for (i = 0; i < num; i++)
    {
    	if ((tr[i].square) >= maxSquare)
    	{
    		maxSquare = (tr[i].square);
    		maxI = i;
    	}
    }

 
    printf("Triangle # %d has a maximum square of %lg\n", maxI, maxSquare);
    closing(file, tr);
    return 0;

}
