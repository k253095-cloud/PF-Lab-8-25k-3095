#include <stdio.h>

int main() {
    int seating[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i + j) % 2 == 0)
                seating[i][j] = 1; 
            else
                seating[i][j] = 0; 
        }
    }

    printf("Classroom seating arrangement (1 = occupied, 0 = empty):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", seating[i][j]);
        }
        printf("\n");
    }

    return 0;
}

