#include<stdio.h>
void main()
{
    int n, i, array[100], occ, temp, sum=0;
    printf("How many numbers do you want to print in the array?\n");
    scanf("%d", &n);
    printf("Enter the array of numbers:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the number you want to search the occurence of:\n");
    scanf("%d", &occ);
    for (temp = 0; temp<=n; temp++)
    {
        if (array[temp] == occ)
        {
            sum = sum + 1;
        }
    }
    printf("The number of occurences is %d", sum);
}