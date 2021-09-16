//C171057
//Mahir Rezoun Ahmed
//Solve of Ques 1

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter x y z\n");
    scanf("%d %d %d", &x, &y, &z); //
    float R[x+1][y+1] = {};
    printf("Enter set1\n");
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= y; j++)
        {
            scanf("%f", &R[i][j]);
        }
    }
    float S[x+1][y+1] = {};
    printf("Enter set2\n");
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
            float Max = -99999999;
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
    printf("Sup-Min Composition\n");
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= z; j++)
        {
            printf("%0.1f ", xz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
