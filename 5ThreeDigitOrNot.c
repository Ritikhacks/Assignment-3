#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int i = 0;
    while(n>0)
    {
        n = n/10;
        i++;
    }
    if (i==3)
    {
        printf("YES! a three digit number\n"); 
    }
    else 
        printf("NO! Not three digit number\n");
    return 0;
}