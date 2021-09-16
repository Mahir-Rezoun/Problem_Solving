#include<stdio.h>
void main()
{
    int i,n,j,swap;

    printf("Number of elements?\n");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(j=0;j<n;j++){
        for(i=0;i<n-i-1;i++){
            if(a[i]>a[i+1]){
                    swap=a[i];
                    a[i]=a[i+1];
                    a[i+1]=swap;
        }
    }

    }
    printf("Sorted numbers are:\n");
    for(j=0;j<n;j++){
    printf("%d ",a[j]);}
}
