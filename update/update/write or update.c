#include<stdio.h>
int main()
{
    int a[]={2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int index=4;
    int newvalue=80;
    if(index>0 && index<n){
    a[index]=newvalue;
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    }
    else
    printf("invalid");
}
output:2 3 4 5 80
