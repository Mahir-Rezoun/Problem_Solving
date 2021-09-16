//C171057
//Mahir Rezoun Ahmed
//Solve of Ques 7

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p[4] = {}; //Prototype
    int w[4] = {}; //weight
    int b = 0; //bias
    for(int i = 1; i <= 3; i++){
        scanf("%d", &p[i]); //taking input for prototype
    }
    for(int i = 1; i <= 3; i++){
        scanf("%d", &w[i]); //taking input for weight
    }
    scanf("%d", &b);  //taking input for bias
    int x = (p[1]*w[1])+(p[2]*w[2])+(p[3]*w[3])+b;
    if(x == 1){
        printf("apple\n");
    }
    else if(x == -1){
        printf("orange\n");
    }
    else{
        printf("other\n");
    }
    return 0;
}
