#include<stdio.h>
void main()
{
    int item,i,temp;
    printf("Enter the number of item\n");
    scanf("%d",&item);
    int A[item];
    printf("Enter %d unsorted item to sort them:\n",item);
    for(i=0;i<item;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The numbers u have typed are:\n");
    for(i=0;i<item;i++)
    {
        printf("%d,",A[i]);
    }
    for(i=0;i<item;i++)
    {
        item=A[i];
        while(A[i-1]>A[i])
        {
            temp=A[i];
            A[i]=A[i-1];
            A[i-1]=temp;
        }
    }
    printf("\n");
    for(i=0;i<item;i++)
    {
        printf("%d",&A[i]);
        printf("\n");
    }
}
