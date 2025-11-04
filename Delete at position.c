#include<stdio.h>
#define CAP 50
int main()
{
  int a[CAP]={10,20,30,40,50,60};
  int n=6;
  int pos = 4;
  if(n>0 && pos >=0 && pos<n){
    for(int i=pos;i<n-1;i++){
      a[i]=a[i+1];
    }
    n--;    
  }
  else
  {
    printf("Invalid");
  }
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
