#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int *arr, *p;
    int sum = 0, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (p = arr; p < arr + n; p++) {
        scanf("%d", p);
    }
    max = *arr;
    for (p = arr; p < arr + n; p++) {
        sum += *p;
        if (*p > max)
            max = *p;
    }
    printf("Sum = %d\n", sum);
    printf("Maximum = %d\n", max);
    free(arr);
    return 0;
}
