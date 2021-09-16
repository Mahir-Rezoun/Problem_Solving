#include<stdio.h>
void main()
{
    int a,b,c,i,z[100],sum=0;
    printf("Enter a Binary Number\n");
    scanf("%d",&a);
    for(i=0;i<100;i++)
    {
        z[i]=a%10;
        a=a/10;
        sum=sum+(z[i]*pow(2,i));
    }
    printf("Decimal=%d",sum);

}
