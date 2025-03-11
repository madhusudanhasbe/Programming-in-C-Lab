#include<stdio.h>
#include<string.h>
void main()
{
    char str[100], rev[100];
    int i,j,len,flag = 0,compare = 0;
    printf("Enter a string: ");
    scanf ("%s", str);
    len = strlen(str);
    for (i=len-1,j=0;i>=0;i--,j++)
    {
        rev[j]=str[i];
    }
    rev[j]='\0';
    printf("Reverse of a string is %s\n",rev);
    for (i=0;i<len;i++)
    {
        if (str[i]!=rev[i])
        {
            compare = 1;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }
    if (compare == 0)
    {
        printf("The strings are equal\n");
    }
    else
    {
        printf("The strings are not equal\n");
    }
}