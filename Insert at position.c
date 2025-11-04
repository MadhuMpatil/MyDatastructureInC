#include <stdio.h>
int main()
{
    printf("MADHU PATIL\n");
    printf("1SV24CS065\n");
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 3;
    int val = 99;
    for(int i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = val;
    n++;
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
