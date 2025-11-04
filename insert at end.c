#include<stdio.h>
#define CAP 10
int main()
{
    int a[]={10,20,30};
    int n=3;
    int value=4;
    if(n<CAP){
        a[n]=value;
        n++;
    }
    else
    {
        printf("Array is full\n");
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    
}
output:10 20 30 4
