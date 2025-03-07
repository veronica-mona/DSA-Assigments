/*using arrays, write a c program that accepts a group of N domestic
animals and a group of X wild animals. your program should print N + X
animals after entering each group.*/
#include <stdio.h>

int main() {
    int N, X;


    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);

    printf("Enter the number of wild animals: ");
    scanf("%d", &X);

    char domestic_animals[N][30], wild_animals[X][30];

    printf("\nEnter the names of domestic animals:\n");
    for (int i = 0; i < N; i++) {
        printf("Domestic Animal %d: ", i + 1);
        scanf("%s", domestic_animals[i]);
    }
    printf("\nEnter the names of wild animals:\n");
    for (int i = 0; i < X; i++) {
        printf("Wild Animal %d: ", i + 1);
        scanf("%s", wild_animals[i]);
    }
    // Print all animals (domestic + wild)
    printf("\nList of all animals:\n");
    for (int i = 0; i < N; i++) {
        printf("Domestic Animal %d: %s\n", i + 1, domestic_animals[i]);
    }
    for (int i = 0; i < X; i++) {
        printf("Wild Animal %d: %s\n", i + 1, wild_animals[i]);
    }
    return 0;
}
