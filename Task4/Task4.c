#include "stdio.h"
#include "stdlib.h"

int main() {
    int n, count = 0;
    // Get number
    printf("Natural number  1 < x < 150: ");
    scanf("%d", &n);

    // Check
    if (n <= 1 || n >= 150) {
        printf("Error!\n");
        system("pause");
        return 1;
    }

    // Calculating
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }
    // Result
    printf("For %d: %d\n", n, count);

    system("pause");
    return 0;
}