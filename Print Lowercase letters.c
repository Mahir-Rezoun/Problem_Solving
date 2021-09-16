#include<stdio.h>
main() //if I use void before main() it returns 91
{
    char x;
    printf("Enter Alphabet to check its case:\n");
    scanf("%c",&x);

    if(x>='A' && x<='Z')
    {
        printf("%c is Uppercase",x);
    }
    else if (x>='a' && x<='z')
    {
        printf("%c is Lowercase",x);
    }
    else
    {
        printf("Its not an Alphabet");
    }
return 0;
}
