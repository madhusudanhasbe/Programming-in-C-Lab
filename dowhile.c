// Syntax of do-while loop
/* do 
{
    statements
} while (expression);*/

// Example:
#include <stdio.h>
void main()
{
    int num = 1;
    do
    {
        printf("%d\n", num);
        num++;
    } while (num<5);
}