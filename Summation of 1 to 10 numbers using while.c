#include<stdio.h>
int main()
{
    int x,sum;
    x=1;
    sum=0;

    while(x<=10)
    {

        sum=sum+x;
        x=x+1;
    }
    printf("%d,",sum);
return 0;
}

