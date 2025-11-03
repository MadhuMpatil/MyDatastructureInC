#include<stdio.h>
#include<stdlib.h>
int main()
{
        int *ptr;
        ptr=(int*)malloc(sizeof(int));
        if(ptr==NULL)
        {
                printf("memory allocation failed\n");
                return 1;
        }
        *ptr=25;
        printf("value stored at allocated memory:%d\n",*ptr);
        free(ptr);
        return 0;
}
