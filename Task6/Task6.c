#include "stdlib.h"
#include "stdio.h"
#include "math.h"

int main(){
    //Declaring and getting parameters
    int x1, y1, x2, y2;
    double result;
    printf("x1, y1, x2, y2:\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    //Calculating
    result = sqrt((pow((x2-x1),2) + pow(y2-y1,2)));

    //Output
    printf("Result: %.6f\n", result);
    system("pause");
    return 0;
}