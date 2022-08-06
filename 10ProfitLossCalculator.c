#include <stdio.h>
int main()
{
    float cp,sp;
    printf("Enter cost price and selling price respectively: ");
    scanf("%f%f",&cp,&sp);

    if(cp>sp)
    {
        printf("Loss Percent: %f%%\n ", ((cp-sp)/cp)*100);
    }
    else 
        printf("Profit Percentage: %f%%\n", ((sp-cp)/cp)*100);
    
    return 0;
}