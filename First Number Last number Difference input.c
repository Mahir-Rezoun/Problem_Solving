#include<stdio.h>
int main()
{
    int x,n,d;

    printf("enter the first number:");
    scanf("%d",&x);

    printf("enter the last number:");
    scanf("%d",&n);

    printf("enter the difference:");
    scanf("%d",&d);

    while(x<=n)
    {
        printf("%d,",x);
        x=x+d;
    }
return 0;
}

