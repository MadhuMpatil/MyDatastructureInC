#include <stdio.h>
#include <stdlib.h>
int* mergeArrays(int *a, int n1, int *b, int n2, int *mergedSize) {
    int *merged = (int*)malloc((n1 + n2) * sizeof(int));
    if (merged == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            if (k == 0 || merged[k - 1] != a[i])
                merged[k++] = a[i];
            i++;
        } else if (b[j] < a[i]) {
            if (k == 0 || merged[k - 1] != b[j])
                merged[k++] = b[j];
            j++;
        } else {
            // Equal elements
            if (k == 0 || merged[k - 1] != a[i])
                merged[k++] = a[i];
            i++;
            j++;
        }
    }
    while (i < n1) {
        if (k == 0 || merged[k - 1] != a[i])
            merged[k++] = a[i];
        i++;
    }
    while (j < n2) {
        if (k == 0 || merged[k - 1] != b[j])
            merged[k++] = b[j];
        j++;
    }
    merged = (int*)realloc(merged, k * sizeof(int));
    if (merged == NULL) {
        printf("Memory reallocation failed!\n");
        exit(1);
    }
    *mergedSize = k;
    return merged;
}
int main() {
    int n1, n2;
    int *a, *b, *merged;
    int mergedSize;
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    a = (int*)malloc(n1 * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d sorted elements for first array:\n", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    b = (int*)malloc(n2 * sizeof(int));
    if (b == NULL) {
        printf("Memory allocation failed!\n");
        free(a);
        return 1;
    }
    printf("Enter %d sorted elements for second array:\n", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    merged = mergeArrays(a, n1, b, n2, &mergedSize);
    printf("\nMerged sorted array (no duplicates):\n");
    for (int i = 0; i < mergedSize; i++)
        printf("%d ", merged[i]);
    printf("\n");
    free(a);
    free(b);
    free(merged);
    return 0;
}
