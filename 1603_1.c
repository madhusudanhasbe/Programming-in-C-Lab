#include<stdio.h>
void main()
{
    int arr1[100], arr2[100], unionarr[200], intarr[100];
    int m,n,i,j,k,flag;
    printf("Enter the number of elements in array 1:\n");
    scanf("%d", &m);
    printf("Enter the number of elements in array 2:\n");
    scanf("%d", &n);
    printf("Enter the elements of array 1:\n");
    for (i=0; i<m; i++)
    {
        scanf("%d", &arr1[i]);
        unionarr[i] = arr1[i];
    }
    printf("Enter the elements of array 2:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr2[i]);
    }
    k = m;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < m; j++)
        {
            if (arr2[i] == arr1[j])
            {                
                flag = 1;
                break;
            }
        }
        if (flag == 0) 
        {
            unionarr[k] = arr2[i];
            k++;
        }
    }
    printf("Union of the two given arrays is: ");
    for (i = 0; i < k; i++) 
    {
        printf("%d ", unionarr[i]);
    }
    printf("\n");
    k = 0;
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {
                intarr[k] = arr1[i];
                k++;
                break;
            }
        }
    }
    printf("Intersection of the two given arrays is: ");
    for (i = 0; i < k; i++) 
    {
        printf("%d ", intarr[i]);
    }
    printf("\n");
}