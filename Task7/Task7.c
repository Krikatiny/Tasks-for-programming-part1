#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){
    //Declaring and input parameters
    int num, x1, y1, r1, x2, y2, r2;
    printf("Enter x1, y1, r1, x2, y2, r2:\n");
    scanf(" %d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    //x1 == x2 and y1 == y2 and r1 == r2: num = -1
    //|o1o2| > r1 + r2 : num = 0
    //|o1o2| = r1 + r2 : num = 1
    //|o1o2| < r1 + r2 : num = 2
    if(x1 == x2 && y1 == y2 && r1 == r2){
        num = -1;
    } else{
        if (sqrt((pow((x2-x1),2) + pow(y2-y1,2))) > r1 + r2){
            num = 0;
        }
        if (sqrt((pow((x2-x1),2) + pow(y2-y1,2))) == r1 + r2){
            num = 1;
        }
        if (sqrt((pow((x2-x1),2) + pow(y2-y1,2))) < r1 + r2){
            num = 2;
        }
    }

    // Output
    printf("Num of points: %d\n", num);
    system("pause");
    return 0;
}