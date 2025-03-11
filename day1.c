#include <stdio.h>
#include <math.h>
void main()
{
    // considering quadratic equation as ax^2+bx+c = 0
    float a,b,c,d;
    scanf("%f\n%f\n%f",&a,&b,&c);
    d = b*b-4*a*c;
    if (a == 0)
    {
        printf("Equation is not quadratic.");
    }
    else if (b == 0 && c<=0)
    {
        printf("Roots are %.2f and -%.2f", sqrtf(-c/a),sqrtf(-c/a));
    }
    else if (c==0)
    {
        printf("Roots are 0 and %.2f", -b/a);
    }
    else if (d>=0)
    {
        printf("Roots are %.2f and %.2f", -b+sqrtf(d)/2*a, -b-sqrtf(d)/2*a);
    }
    else if (d<0)
    {
        printf("Roots are imaginary and are %.2f+%.2fi and %.2f%.2fi", -b/2*a, +sqrtf(-d), -b/2*a, -(sqrtf(-d)));
    }
}