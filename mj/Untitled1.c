#include<stdio.h>
void main()
{
    int *a,b;
    a=5;
    b=10;
    a=&b;
    printf("%d\n",*a);
}
