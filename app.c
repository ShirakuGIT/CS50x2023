# include <stdio.h>

// Problem Set 1 CS50x - Mario (More Comfortable)
// Changed implementation to be exclusive to all integers!
// Author: Shivaram Kumar Jagannathan

#include <stdio.h>

unsigned int get_int() {
    int num;
    char input[50];

    do {
        printf("Enter a natural number: ");
        fgets(input, sizeof(input), stdin);
    } while (sscanf(input, "%d", &num) != 1 || num <= 0);

    return (unsigned int)num;
}

int main() {
    int input = get_int();

    for (int i = 1; i <= input; i++) {
        for (int j = input; j > i; j--) {
            printf(" ");
            }
            for (int k = 1; k <= i; k++) {
                printf("#");
        }
        printf("  ");
        for (int l = 0; l < i; l++) {
            printf("#");
        }
        printf("\n");
    }
}