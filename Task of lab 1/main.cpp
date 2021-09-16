//C171057
//Mahir Rezoun Ahmed
//Solve of Ques 1

#include <stdio.h>
int main()
{
    int x, y, z;

    printf("Value of matrix dimensions x y and z\n");

    scanf("%d %d %d", &x, &y, &z); //Taking inputs
    float R[x+1][y+1] = {};
    printf("Input set for matrix 1\n");
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= y; j++)
        {
            scanf("%f", &R[i][j]);
        }
    }
    float S[x+1][y+1] = {};
    printf("Input set for matrix 2\n");
    for(int i = 1; i <= y; i++)
    {
        for(int j = 1; j <= z; j++)
        {
            scanf("%f", &S[i][j]);
        }
    }

    float xz[x+1][z+1] = {};

    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= z; j++)
        {
            float Max = -100000000;
            for(int k = 1; k <= y; k++)
            {
                float Min = 0;
                if(R[i][k] <= S[k][j])
                {
                    Min = R[i][k];
                }
                else
                {
                    Min = S[k][j];
                }
                if(Max < Min)
                {
                    Max = Min;
                }
            }
            xz[i][j] = Max;
        }
    }
    printf("Output Sup-Min Composition\n");
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= z; j++)
        {
            printf("%f ", xz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
