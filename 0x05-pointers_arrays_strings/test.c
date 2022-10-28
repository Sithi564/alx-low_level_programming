#include <stdio.h>
#include <stdlib.h>

int * Foo(int *x, int n)
{
    int *piBuffer = NULL;
    int i = 0;
    //creating an integer array of size n.
    piBuffer = malloc(n * sizeof(int));
    //make sure piBuffer is valid or not
    if (piBuffer == NULL)
    {
        // allocation failed, exit from the program
        fprintf(stderr, "Out of memory!\n");
        exit(1);
    }
    //Add the value of the arrays
    for (i = 0; i < n; ++i)
    {
        piBuffer[i] = piBuffer[i] + x[i];
    }
    //Return allocated memory
    return piBuffer;
}
