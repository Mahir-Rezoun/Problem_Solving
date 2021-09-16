#include<stdio.h>
int main()
{
    int number=1;
    for(number;number<=20;number++)
    {
        if(number<=15)
        {
            break;
        }

        printf("Hello number %d\n",number);
    }
    return 0;
}
