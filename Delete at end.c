#include<stdio.h>
#define CAP 50
int main()
{   
  printf("Madhu Patil\n");
  printf("!SV24CS065\n");
  int a[CAP]={10,20,30,40};
  int n=4;
  if(n>0)
  {
    n--;    
  }
  else
  {
    printf("array is empty");
  }
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
