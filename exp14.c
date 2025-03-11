#include<stdio.h>
struct Employee
{
    int id;
    char name[20], des[10], dept[10];
    float bs;
};
void main()
{
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[n];
    for (i=0; i<n; i++)
    {
        printf("=============\nEnter the details of Employee %d:\n=============\n", i+1);
        printf("Enter employee ID No.:\n");
        scanf("%d", &e[i].id);
        printf("Enter employee name:\n");
        scanf("%s", e[i].name);
        printf("Enter employee designation:\n");
        scanf("%s", e[i].des);
        printf("Enter employee department:\n");
        scanf("%s", e[i].dept);
        printf("Enter employee's basic salary:\n");
        scanf("%f", &e[i].bs);
    }
    printf("Details of all Employees:\n");
    for (i=0; i<n; i++)
    {
        printf("=============\nDetails of Employee %d:\n=============\n", i+1);
        printf("Employee ID: %d\n", e[i].id);
        printf("Employee Name: %s\n", e[i].name);
        printf("Employee Designation: %s\n", e[i].des);
        printf("Employee Department: %s\n", e[i].dept);
        printf("Employee Basic Salary: %.2f\n", e[i].bs);
    }
}