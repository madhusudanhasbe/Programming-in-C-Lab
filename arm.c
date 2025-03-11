#include<stdio.h>
void main()
{
    int num,count,rem,sum;
    for (count = 101; count<=500;count ++)
    {
        num = count;
        sum = 0;
        while (num>0)
        {
            rem = num %10;
            sum=sum+(rem*rem*rem);
            num = num/10;
        }
        if (count==sum)
        {
            printf("%d is a Armstrong number.\n", count);
        }
    }
}