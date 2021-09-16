#include<stdio.h>
#include<time.h>
int main()
{
    int A,h1,h2,h3,m1,m2,m3;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    m3=(m1+m2)/2;
    h3=(h1+h2)/2;
    A=(h1+h2)%2;
    if(A==0){
        printf("%02d:%02d",h3,m3);
    }
    else{
        m3=m3+30;
        if(m3>60)
            m3=m3-60;
            h3=h3-1;
        printf("%02d:%02d",h3,m3);
    }
}
