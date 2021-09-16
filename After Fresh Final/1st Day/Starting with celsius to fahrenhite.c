#include<stdio.h>
int main()
{
    int fer,cel;
    int upper,lower, set;
    upper=300;
    lower=0;
    set=20;
    fer=lower;
    while(fer<=upper)
    {
        cel = 5 * (fer-32) / 9;
        printf("%d\t%d\n",fer,cel);
        fer=fer+set;
    }
    return 0;
}

