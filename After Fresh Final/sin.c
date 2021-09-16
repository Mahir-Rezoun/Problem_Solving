#include <math.h>
#define PI 3.1416
#define ANGLEMAX 180
main()
{
    int angle,limit;
    angle=0;
    float x,y;
    limit=360;
    printf("Angle   cos(angle)\n\n");
    while(angle<=limit)
    {
        x=(PI/ANGLEMAX)*angle;

        y=cos(x);
        printf("%d\t%.4f\n",angle,y);
        angle=angle+10;
    }
    return 0;
}
