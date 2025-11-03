#include<stdio.h>
int main()
{
        int n;
        printf("Enter number of elements:");
        scanf("%d",&n);
        printf("\nTime complexity:o(n^2)\n");
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        printf("(%d,%d)\n",i,j);
                }
        }
        return 0;
}
