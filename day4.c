#include<stdio.h>  
int main()    
{    
int i=1,fact=1,number;    
printf("Enter a number: ");    
scanf("%d",&number);    
if (number>0)
{
while(i<=number)
{    
    fact=fact*i;
    i++;    
}    
printf("Factorial of %d is: %d",number,fact);    
return 0;
}  
}   