#include<stdio.h>
int main()
{
    int i,k,arr[100];
    scanf("%d",&k);
    while(scanf("%d"))
    for(i=1;i<k;i++){
            arr[i]=arr[i]+arr[i-1];
    }
}
