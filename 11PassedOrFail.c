#include <stdio.h>
int main()
{
    float marks[5]; //FLOAT!!
    printf("Enter marks of 5 subjects of student: ");
    float marksSum = 0;

    for(int i=0; i<5; i++)
    {
        scanf("%f",&marks[i]); 
        marksSum += marks[i];
    }

    float marksPercentage = (marksSum/500)*100;
    printf("%f%%\n",marksPercentage);
    if(marksPercentage > 33)
        printf("Hurrey! Passed\n");
    else 
        printf("Work Hard, Failed\n");

    return 0;
}