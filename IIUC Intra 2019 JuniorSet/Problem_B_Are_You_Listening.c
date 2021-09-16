#include<stdio.h>
#include<time.h>
int main()
{
    int h1,h2,h3,m1,m2,m3;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    m3=((h1*60+m1)+(h2*60+m2))%120;
    m3=m3/2;
    h3=(h1+h2)/2;
    printf("%02d:%02d",h3,m3);
}
