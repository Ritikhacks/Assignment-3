#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf("%d is max",a);
    }
    else if (a<b)
        printf("%d is max",b);
    else 
        printf("%d is max",a);
    return 0;
}