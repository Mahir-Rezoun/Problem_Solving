#include<stdio.h>
int main()
{
    double Inch,CM;
    printf("Enter a length in Inch\n");
    scanf("%lf",&Inch);
    CM=2.304*Inch;
    printf("Converted into Centimetre: %lf",CM);
    return 0;

}
