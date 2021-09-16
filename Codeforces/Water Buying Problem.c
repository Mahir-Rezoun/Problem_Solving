/*Codeforces 1118A Div3 problem*/
#include<stdio.h>
int main()
{
    unsigned long long int n,c,q,i,j,a,b;;
    scanf("%I64d",&q);
    for(i=0;i<q;i++){
        scanf("%I64d%I64d%I64d",&n,&a,&b);
        if(2*a<b){
                c=n*a;
        }
        else{
            if(n%2==0)
                c=(n/2)*b;
            else
                c=((n/2)*b)+a;
        }
        printf("%I64d\n",c);
    }
}
/*Solved after 2 tries*/
