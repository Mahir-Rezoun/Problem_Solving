#include<stdio.h>
int main()
{
    int first_marks[10]={71,72,73,74,75,76,77,78,79,80},second_marks[10]={81,82,83,84,85,86,87,88,89,90},final_marks[10]={91,92,93,94,95,96,97,98,99,100};
    int total_marks[10];
    int i,x,k;

    for(i=0;i<10;i++)
    {
        total_marks[i]=first_marks[i]/4+second_marks[i]/4+final_marks[i]/2;

    }
    for(i=1;i<=10;i++)
    {
        printf("Roll:%d\ttotal_marks:%d\n",i,total_marks[i-1]);
    }


    for(i=1,k=0;i<=10,k<100;i++,k++)
    {
        //printf("Roll:%d\ttotal_marks:%d\n",i,total_marks[i-1]);

        //for(k=0;k<100;k++)
        //{
            if(total_marks[i-1]%k==0)
            {
                x=total_marks[i-1]/k;
                printf("%d number is repeated %d times",k,x);
            }
        }



    return 0;
}
