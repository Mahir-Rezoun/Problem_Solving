#include<stdio.h>
int main()
{
    int i,p=1,l,a,b,c,num;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        while(scanf("%d%d%d",&a,&b,&c))
        {
            if(a>b&&b<c||a<b&&b<c)
                num=b;
            else if(a>c&&b<c||a<c&&c<b)//(a>c && c>b || a<c && c<b)
                num=c;
            else if(b>a && a>c || b<a && a<c)
                num=a;
            printf("Case %d: %d\n",p,num);
            p++;

        }

    }
}
