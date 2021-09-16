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
        d++;  //Increases values of d 1 in one loop
        x=x+d; //Add that increasing value each time AND ADD WITH X to N,So the value increase 1,2,3,4,.... like that
    }
return 0;
}


