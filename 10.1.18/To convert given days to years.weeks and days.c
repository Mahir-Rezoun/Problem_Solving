#include<stdio.h>
int main()
{
    int onlydays,days,weeks,years;

    printf("Enter the number of days:\n");
    scanf("%d",&onlydays);

    years=onlydays/365;
    weeks=(onlydays%365)/7;
    days=(onlydays%365)%7;

    printf("%d days = %d year %d week %d day\n",onlydays,years,weeks,days);

    return 0;

}
