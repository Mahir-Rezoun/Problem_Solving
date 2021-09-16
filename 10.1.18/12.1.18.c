#include<stdio.h>
int main()
{
    double a,b,c,d,result;

    printf("Enter the value of a,b,c & d:\n");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    printf("%lf*%lf-%lf*%lf=",a,b,c,d);
    result=a*b-c*d;
    printf("%lf",result);
    return 0;
}
