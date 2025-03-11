#include<stdio.h>
void main()
{
    int num, rem ,sum = 0, multi = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num>0)
    {
        rem = num %10;
        sum = sum + rem;
        multi = multi*rem;
        num = num/10;
    }
    if (multi==sum)
    {
        printf("%d is a SPY number.\n", temp);
    }
    else 
    {
        printf("%d is not a SPY number.\n", temp);
    }
}