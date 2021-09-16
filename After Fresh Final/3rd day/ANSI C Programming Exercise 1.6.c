/*A program to output a multiplication table of 5*/
#define M 5
main()
{
    int a;
    a=1;
    while(a<=10)
    {
        printf("%d*%d=%d\n",M,a,M*a);
        a=a+1;
    }

    return 0;
}
