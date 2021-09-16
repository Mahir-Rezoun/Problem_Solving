#include<stdio.h>
int main()
{
    int a=0,b=1,c,i; //why not long long working????
    //for(i=2;i<=n;i++)
    printf("%d,%d,",a,b);
    //while(c<=20)
    for(i=1;i<=100;i++)

    {
        c=a+b;
        a=b;
        b=c;

        printf("%d,",c);
    }

//b++;;
    return 0;
}
