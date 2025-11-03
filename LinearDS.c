#include <stdio.h>
#include <time.h>

int main() {
    int n;
    clock_t start, end;
    double time_taken;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nTime Complexity: O(1)\n");
    start = clock();  
    int square = n * n;
    end = clock();  
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Square of %d = %d\n", n, square);
    printf("Execution Time = %f seconds\n", time_taken);
    return 0;
}

