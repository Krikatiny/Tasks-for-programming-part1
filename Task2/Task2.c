#include "stdlib.h"
#include "stdio.h"

int NCD(int a, int b);
int NCK(int a, int b);
int CALC(int* array, int num);

int main(){
    //Declaring parameters
    int num, res;

    //Getting values
    printf("Enter from 2 to 20 values\n");
    scanf("%d", &num);
    int *arr = calloc(num, sizeof(int));

    //To array
    printf("Enter numbers: \n");
    if (2 <= num && num <= 20) {
        for (int i = 0; i < num; ++i) {
            scanf("%d", &arr[i]);
        }
        //Calculating
        printf("NCK: %d\n", CALC( arr, num));
    }

    //If Error
    else{
        printf("Error!\n");
        system("pause");
        return 1;
    }
    system("pause");
    return 0;
}
//Найбільше спільне кратне
int NCK(int a, int b){
    return (a*b) / NCD(a, b);
}
//Найменше спільне кратне
int NCD(int a, int b){
    if (b == 0){
        return a;
    }
    return NCD(b, a % b);
}
//Багато чисел
int CALC(int* array, int num){
    int result = array[0];
    for (int i = 0; i < num; ++i) {
        result = NCK(array[i], result);
    }
    return result;
}