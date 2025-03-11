#include <stdio.h>  
#include <string.h>

void main()
{
    char s[100];
    int i;
    printf("\nEnter a string: ");
    gets(s);
    for (i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    printf("\nString in Upper case is %s.", s);
}