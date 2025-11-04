#include<stdio.h>
int main()
{
    int a[]={1,3,4,56,9};
    int n=sizeof(a)/sizeof(a[0]);
    int index=3;
    int newvalue=44;
    if(index>=0 && index<n){
    a[index]=newvalue;
    for(int i=0;i<n;i++)

        printf("%d ",a[i]);
    }
    else
    {
        printf("Happy diwali");
    }
}
