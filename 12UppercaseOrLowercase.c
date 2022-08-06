#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet ");
    scanf("%c",&ch);

    if(ch >= 65 && ch <= 90)
        printf("Uppercase\n");
    else if(ch >= 97 && ch <= 122)
        printf("Lowecase\n");
    // if(ch >= 'A' && ch <= 'Z')
    // {
    //     printf("'%c' is uppercase alphabet.", ch);
    // }
    // else if(ch >= 'a' && ch <= 'z')
    // {
    //     printf("'%c' is lowercase alphabet.", ch);
    // }
    // else
    // {
    //     printf("'%c' is not an alphabet.", ch);
    // }

    return 0;
}