#include<stdio.h>
void main()
{
    int n,a,b,k,i,j,l,f;
    int s[100];
    int m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        j=i;
        s[j]=b;
        }
    scanf("%d",&k);
    for(j=0;j<n;j++){
        if(k<=s[j])
        {
            m++;
        }
    }
    printf("%d",m);
}
