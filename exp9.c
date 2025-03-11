#include<stdio.h>
void main ()
{
    char str[100], str_copy[100];
    int i=0, length = 0, count_vowel = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    while (str[i]!='\0')
    {
        length++;
        str_copy[i] = str[i];
        if (str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
        {
            count_vowel++;
        }
        i++;
    }
    str_copy[i]='\0';
    printf("Length of the string is %d\n", length);
    printf("Number of characters in string are %d\n", length);
    printf("Number of vowels are %d\n", count_vowel);
    printf("Copied string is %s", str_copy);
}