#include <stdlib.h>
#include <stdio.h>


int main()
{
    FILE* f = fopen("input.txt", "w");

    fputs(" lboah.", f);

    return EXIT_SUCCESS;
}