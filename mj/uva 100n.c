#include<stdio.h>
int main()
{
    int i,j;
    int k=0;
    while(scanf("%d%d",&i,&j)!=EOF)
        {
            printf("%d %d ",i,j);
            while(j<=1)
            {
                k=k++;
                if(j%2==1)
                {
                    j=3j+1;
                }
                else
                    j=j/2;

            }
            printf("%d\n",k);
        }
}
