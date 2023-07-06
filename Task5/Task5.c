#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int main(){
    //Getting n
    int sum = 0, num, result = 0;
    printf("Enter n (1 < n < 10000): ");
    scanf("%d", &num);

    if(1 < num && num < 10000) {
        //2^n
        result = pow(2, num);

        //sum = i^1 + i^2 + i^3 ... i^num-2
        for (int i = 0; i < num - 2; i++) {
            sum = pow(2, i + 1) + sum;
        }
        sum = sum/2;

        //2^n - sum
        result = (result - sum)%12345;

        printf("%d\n", result);
        system("pause");
        return 0;
    } else{
        printf("Error!");
        system("pause");
        return 1;
    }
}