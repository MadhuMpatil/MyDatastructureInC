// Fixed capacity by using macro function called cap
#include<stdio.h>
#define CAP 20
void printArray(int a[],int n);
void printArray(int a[CAP],int n)
{
    for(int i=0;i<n&&i<CAP;i++)
    {
        a[i]=i;
        printf(" %d",a[i]);
    }
}
int main()
{
    int a[CAP],n=120;
    printArray(a,n);
}
