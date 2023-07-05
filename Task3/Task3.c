#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int main(){
    //Getting p
    int sum = 0, num, result = 0;
    printf("Enter p (p <= 30): ");
    scanf("%d", &num);

    if(num >= 30) {
        //2^p
        result = pow(2, num);

        //sum = i^1 + i^2 + i^3 ... i^num-2
        for (int i = 0; i < num - 2; i++) {
            sum = pow(2, i + 1) + sum;
        }

        //2^p - sum
        result = result - sum;

        printf("%d\n", result);
        system("pause");
        return 0;
    } else{
        printf("Error!");
        system("pause");
        return 1;
    }
}