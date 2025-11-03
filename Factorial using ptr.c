#include<stdio.h>
int main()
{
        int n,i;
        long fact=1;
        long *p=&fact;
        printf("Enter a number:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                *p=*p*i;
        }
        printf("Factorial of %d=%ld\n",n,*p);
        return 0;
}
~        
