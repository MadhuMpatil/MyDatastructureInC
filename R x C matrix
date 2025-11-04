#include <stdio.h>
#include <stdlib.h>
int main() {
    int R, C;
    printf("Enter rows and columns: ");
    scanf("%d %d", &R, &C);

    int matrix = (int)malloc(R * C * sizeof(int));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n", R * C);
    for (int *p = matrix; p < matrix + R * C; p++) {
        scanf("%d", p);
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", *(matrix + i * C + j));
        }
        printf("\n");
    }
    if (R == C) {
        printf("\nTranspose (in-place):\n");
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                printf("%d ", *(matrix + j * C + i));
            }
            printf("\n");
        }
    } else {
        int transpose = (int)malloc(C * R * sizeof(int));
        if (transpose == NULL) {
            printf("Memory allocation for transpose failed!\n");
            free(matrix);
            return 1;
        }
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                *(transpose + j * R + i) = *(matrix + i * C + j);
            }
        }

        printf("\nTranspose Matrix:\n");
        for (int i = 0; i < C; i++) {
            for (int j = 0; j < R; j++) {
                printf("%d ", *(transpose + i * R + j));
            }
            printf("\n");
        }

        free(transpose);
    }

    free(matrix);
    return 0;
}
