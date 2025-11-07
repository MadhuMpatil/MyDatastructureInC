#include<stdio.h>
#define max 5

int q[max];
int f=-1,r=-1;
void enq(int v){
    if(r==max-1)
        printf("Queue full\n");
    else{
        if(f==-1) f=0;
        r++;
        q[r]=v;
    }
}
void dq(){
    if(f==-1)
        printf("Queue empty\n");
    else{
        printf("%d deleted\n",q[f]);
        for(int i=f+1;i<=r;i++)
             q[i-1]=q[i];
        r--;
    }
}
void display(){
    for(int i=f;i<=r;i++)
        printf("%d\n",q[i]);
}

void main(){
    enq(10);
    enq(20);
    enq(30);
    enq(40);
    enq(50);
    display();
    enq(30);
    dq();
    dq();
    dq();
    dq();
    dq();
    enq(60);
    enq(70);
    display();
}
