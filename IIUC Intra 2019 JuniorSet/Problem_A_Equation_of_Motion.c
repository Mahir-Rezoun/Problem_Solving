#include<stdio.h>
int main()
{
    int N,u,t,a,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d%d%d",&u,&t,&a);
        double s=(u*t)+0.5*a*t*t;
        printf("%0.2lf\n",s);
    }
    return 0;
}
