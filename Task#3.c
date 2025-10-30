#include <stdio.h>

int main() {
    int image[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };
    
    int inverted[4][4];
    int whiteCount = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (image[i][j] == 1)
                whiteCount++; 
            inverted[i][j] = (image[i][j] == 1) ? 0 : 1;
        }
    }

    printf("Original Image\t\tInverted Image\n");
    printf("--------------------------------------\n");

    for (int i = 0; i < 4; i++) {
        // Original
        for (int j = 0; j < 4; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\t|\t");

        // Inverted
        for (int j = 0; j < 4; j++) {
            printf("%d ", inverted[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal White Pixels in Original Image: %d\n", whiteCount);

    return 0;
}

