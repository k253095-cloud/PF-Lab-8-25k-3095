#include <stdio.h>

int main() {
    int rows = 5;
    int num;

    for (int i = 1; i <= rows; i++) {
        num = 2 * i - 1;

        for (int j = 1; j <= num; j++)
            printf("* ");
        
        printf("\t| ");

        for (int j = 1; j <= num; j++)
            printf("%d ", j);
        
        printf("\t| ");

        for (int j = 1; j <= num; j++)
            printf("%c ", 'A' + j - 1);
        
        printf("\n");
    }

    return 0;
}

