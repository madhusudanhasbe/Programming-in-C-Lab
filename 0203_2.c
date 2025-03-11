#include<stdio.h>
#include<math.h>
void main()
{
    int arr[100]={};
    int i,j,n;
    float temp,sum=0,mean,var;
    printf("Enter the number of elements you want in the array:\n");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        printf("Enter the %dth element:\n", i+1);
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The minimum value in array is %d", arr[0]);
    printf("\nThe maximum value in array is %d", arr[n-1]);
    for (i=0;i<n;i++)
    {
        sum = arr[i] + sum;
    }
    mean = sum/n;
    sum = 0;
    for (i=0;i<n;i++)
    {
        sum = sum + pow((arr[i]-mean),2);
    }
    var = sum/n;
    printf("\nThe variance is %.2f\n", var);
    printf("The standard deviation is %.2f\n", sqrt(var));
}