#include <stdio.h>
int main()
{
    int n;
    printf("Enter the year ");
    scanf("%d",&n);

    if (n%100==0)
    {
        if(n%400==0)
        printf("Leap year\n");
        else 
        printf("Not Leap Year\n");
    }
    else if(n%4==0)
        printf("Leap year\n");
    else 
        printf("Not Leap year\n");
    
    return 0;
}