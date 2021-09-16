#include<stdio.h>
int main()
{
    int x,n,d;

    d=0;

    printf("enter the first number:");
    scanf("%d",&x);

    printf("enter the last number:");
    scanf("%d",&n);



    while(x<=n)
    {
        printf("%d,",x);
        d++;
        x=x+d;
    }
return 0;
}


