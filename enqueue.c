#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
void Enqueue(int value)
{
    if(rear==SIZE-1){
    printf("Queue is full\n");
    }
    else
    {
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=value;
        printf("%d inserted \n",value);
    }
    
}
int main() {
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Enqueue(60);
    return 0;
}
