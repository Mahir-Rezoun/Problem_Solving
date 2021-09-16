#include<stdio.h>
int main()
{
    int n,i;
    int a=0;
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++){
        if(m[i]==1){
            a++;
        }
    }
    printf("%d",a);

}
