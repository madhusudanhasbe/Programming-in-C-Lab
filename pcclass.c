#include<stdio.h>
int main()
/* 
Marks Grader
{
    float marks;
    printf ("Enter the marks:\n");
    scanf ("%f", &marks);
    if (marks > 100)
    {
        printf ("Invalid marks");
    }
    else if (marks > 90 && marks <= 100)
    {
        printf ("O Grade");
    }
    else if (marks > 80 && marks <= 90)
    {
        printf ("A+ Grade");
    }
    else if (marks > 70 && marks <= 80)
    {
        printf ("A Grade");
    }
    else if (marks > 60 && marks <= 70)
    {
        printf ("B+ Grade");
    }
    else if (marks > 50 && marks <= 60)
    {
        printf ("B Grade");
    }
    else if (marks >= 40 && marks <= 50)
    {
        printf ("P Grade");
    }
    else if (marks < 40)
    {
        printf ("Fail");
    }
    return 0;
} */

/* 
Fahrenheit to Celsius

{
    float cel;
    printf("Enter temperature in degrees Fahrenheit: ");
    scanf("%f", &cel);
    printf ("The temperature in degrees Celsius is %.2f", ((cel-32)*5)/9);
    return 0;
}
*/

{
    int n = 2395;
    int a = (n % 10)+1;
    if (a == 10)
    {
        return a % 10;
    }
    n = n /10;
    int b = (n % 10)+1;
    if (b == 10)
    {
        return b % 10;
    }
    n = n /10;
    int c = (n % 10)+1;
    if (c == 10)
    {
        return c % 10;
    }
    n = n /10;
    int d = (n % 10)+1;
    if (d == 10)
    {
        return d % 10;
    }
    printf ("%d%d%d%d", a,b,c,d);
    return 0;
}