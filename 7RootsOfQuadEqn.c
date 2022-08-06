#include <stdio.h>
int main()
{
    int a,b,c; //ax^2+bx+c=0
    printf("Enter coefficients a,b,c of quadratic eqn ax^2+bx+c=0\t");
    scanf("%d%d%d",&a,&b,&c);

    int D = (b*b) - (4*a*c);//Discriminant
    if (D==0)
    {
        printf("Roots are Real & Equal\n");
    }
    else if (D>0)
        printf("Roots are real & distinct\n");
    else 
        printf("Roots are imaginary\n");

    printf("%d\n",D);
    
    return 0;
    
}