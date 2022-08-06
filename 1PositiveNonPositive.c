#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("Positive number\n");
    }
    else 
        printf("Non-positive number\n");
    return 0;
}