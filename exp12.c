#include<stdio.h>
void array(int arr[], int n)
{
    int i;
    printf("Enter %d numbers:\n", n);
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
void bubble_sort(int arr[], int n)
{
    int i, j, temp=0, count=0;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
    }
    printf("Number of iterations in bubble sort is %d\n", count);
}
void selection_sort(int arr[], int n)
{
    int i, j, temp=0, count=0;
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                count++;
            }
        }
    }
    printf("Number of iterations in selection sort is %d\n", count);
}
void main()
{
    int arr[10],arr2[10], n, i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    array(arr,n);
    for (i=0; i<n; i++)
        arr2[i]=arr[i];
    bubble_sort(arr,n);
    selection_sort(arr2,n);
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
}