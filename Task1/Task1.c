#include <stdio.h>
#include <stdlib.h>

int main() {
    //Declaring parameters

    int t1,t2,t3;
    double tSum;
    //Entering values
    printf("Enter three values: \n");
    scanf("%d %d %d", &t1,&t2,&t3);

    //Calculating
    tSum = 1.0/(1.0/t1+1.0/t2+1.0/t3);

    //Output
    printf("\nTime for eating pie is %.2f", tSum);
    system("pause");

    return 0;
}
