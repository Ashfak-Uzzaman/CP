#include<stdio.h>

int main()
{
    int n;
    printf("Address of x: %p\n\n",&n);

    int ara[5]={50,60,70.80,90};

    printf("Value of ara: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\nAddress of array; %d\n",ara);  ////See/////
    for(int i=0;i<5;i++)
    {
        printf("Address of ara[%d]: %d\n",i,&ara[i]);
    }

    char c;
    printf("Address of c: %p\n",&c);


    return 0;
}