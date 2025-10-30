#include <stdio.h>

int main() {
    int cinema[3][3] = {
        {1, 0, 1},
        {0, 0, 1},
        {1, 1, 0}
    };

    int availableCount = 0;

    printf("Available seats are:\n");

    for (int i = 0; i < 3; i++) {         
        for (int j = 0; j < 3; j++) {     
            if (cinema[i][j] == 0) {
                availableCount++;
                printf("Row %d, Seat %d\n", i + 1, j + 1);
            }
        }
    }

    printf("\nTotal available seats: %d\n", availableCount);

    return 0;
}

