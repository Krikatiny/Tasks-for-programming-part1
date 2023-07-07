#include "stdio.h"
#include "string.h"
#include "stdlib.h"

// n!
int fract(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fract(n - 1);
}

// Anargrams for word
int countAna(char word[]) {
    int num[64] = {0};  // Duplicates

    int anagrams = fract(strlen(word));  // Initialize max num

    // Count without duplicates
    for (int i = 0; i < strlen(word); i++) {
        int index = word[i] - 'A';
        num[index]++;
    }

    // Count with duplicates
    for (int i = 0; i < 64; i++) {
        if (num[i] > 1) {
            anagrams /= fract(num[i]);
        }
    }

    return anagrams;
}

int main() {
    char word[15];
    printf("Word: ");
    scanf("%s", word);

    if(strlen(word) > 14){
        printf("Error!\n");
        system("pause");
        return 1;
    } else{
        printf("%d\n", countAna(word));

        system("pause");
        return 0;
    }
}