#include<stdio.h>
#include<stdlib.h>

void main()
{
    int x, i, *a, *b, *c;
    printf("Enter the size of both the arrays: ");
    scanf("%d", &x);
    a = (int*)calloc(x,sizeof(int));
    b = (int*)calloc(x,sizeof(int));
    c = (int*)calloc(x,sizeof(int));
    for (i=0; i<x; i++)
    {
        printf("Enter the element %d of matrix 1: ", i+1);
        scanf("%d", &a[i]);
        printf("Enter the element %d of matrix 2: ", i+1);
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }
    printf("Value of addition matrix is: ");
    for (i=0; i<x; i++)
    {
        printf("%d ", c[i]);
    }
    free(a);
    free(b);
    free(c);
}