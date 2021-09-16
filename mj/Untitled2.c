
#include<stdio.h>
int main()
{
char s[1000];
int i,p=0;
while(gets(s)){
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='"')
        {
            p++;
            if(p%2==1)
                printf("``");
            else
                printf("''");
        }
        else
            printf("%c",s[i]);
    }
    printf("\n");
}
return 0;
}
