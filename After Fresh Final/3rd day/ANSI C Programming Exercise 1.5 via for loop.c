/*A program to output a multiplication table of 5 usinf for loop*/
main()
{
    int b,c;
    for(b=1;b<=10;b++)
    {
        c=5*b;
        printf("%d*%d=%d\n",5,b,c);
        getch();/*getch and getchar little interesting difference.Run the program to see it*/

    }
}
