#include <stdio.h>

void main()
{
    int a,b=0,x=0,y=1,z=0;
    printf("Enter the number of terms till you want to print the Fibonnacci numbers:\n");
    scanf("%d", &a);
    while (b<a)
    {
        printf("%d ", z);
        x=y;
        y=z;
        z=x+y;
        b++;
    }
}