#include <stdio.h>
#include <math.h>

double num;

float squareRoot(double y)
{
    y = (y + (num/y))/2;
	if(fabs((pow(y,2)) - num) < 0.0001)
		return y;
	else
		squareRoot(y);
}

void main() 
{
	printf("Enter the number: ");
    scanf("%lf", &num);
	double sq = squareRoot(num);
	printf("Square root of %.3f is %.3f", num, sq);
}