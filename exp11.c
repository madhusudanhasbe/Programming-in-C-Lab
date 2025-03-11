#include<stdio.h>
#include<string.h>
char str_cat(char str1[], char str2[])
{
    int i=0,j=0;
    while(str1[i]!='\0')
        i++;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    puts(str1);
}
void substring()
{  
    char str[15], sub[10];
    int count1 = 0, count2 = 0, i, j, flag;
    printf("Enter a string: ");
    gets(str);
    printf("Enter substring: ");
    gets(sub);
    while (str[count1] != '\0')
        count1++;
    while (sub[count2] != '\0')
        count2++;
    for (i=0; i<=count1-count2; i++)
    {
        for (j=i; j<i+count2; j++)
        {
            flag = 1;
            if (str[j]!= sub[j-i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("Substring exists in mainstring");
    else
        printf("Substring does not exists in mainstring");  
}
void length(char str1[],char str2[])
{
    int i,j;
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; j++);
    if (i>j)
        printf("Length of input string 1 is longer\n");	
    else if(j>i)
        printf("Length of input string 2 is longer\n");	
    else
        printf("Length is equal\n");
}
void main()
{
    char string1[15], string2[15];
    printf("Enter the first string: ");
    gets(string1);
    printf("Enter the second string: ");
    gets(string2);
    length(string1,string2);
    printf("The concatenated string is: ");
    str_cat(string1,string2);
    substring();
}