#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rn, n;
    char play = 'y';

    srand(time(0));

    while (play == 'y') {  
        rn = rand()%100 + 1; 

        printf("Guess the number (1–100): ");
        scanf("%d", &n);

        while (n != rn) {
            if (n < rn)
                printf("Too low! Try again: ");
            else
                printf("Too high! Try again: ");
            scanf("%d", &n);
        }

        printf("Correct!\n");

        printf("Play again? (y/n): ");
        scanf(" %c", &play);
    }

    printf("Thanks for playing!\n");
    return 0;
}