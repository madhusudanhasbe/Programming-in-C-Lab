#include<stdio.h>
#include<math.h>
void main()
{
    float a;
    printf("Enter a number:\n");
    scanf("%f", &a);
    if (a>=0)
    {
        printf("The square root is %.3f", sqrt(a));
    }
    else if (a<0)
    {
        printf("The square root is %.3fi", sqrt(-a));
    }
}