#include<stdio.h>
#include<math.h>

void main()
{
    int choice;
    printf("Press 1 for even/odd\nPress 2 for Prime Number:\n");
    scanf("%d",&choice);
    int a, b, flag = 0, c;
    switch(choice)
    {
        case 1:
            printf("Enter a number to check whether it is even or odd:");
            scanf ("%d", &a);
            if (a%2 == 0)
            {
                printf("The number is even");
            }
            else
            {
                printf("The number is odd");
            }
            break;
        case 2:
            printf("Enter a number to check whether it is prime or composite:");
            scanf("%d", &b);
            if (b < 0)
                {
                    printf("Invalid");
                }
            else if (b==0||b==1)
                {
                    printf("Neither prime nor composite");
                }
            for (c=2;c <= sqrt(b);c++)
            {
                
                if (b%c == 0)
                {
                    flag = 1;
                    printf("The number is composite");
                }
            }
            if (flag == 0 && b!=1 && b!=0)
            {
                printf("The number is prime");
            }
            break;
        default:
            printf("Wrong input");
    }
}