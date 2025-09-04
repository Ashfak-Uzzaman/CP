#include<stdio.h>
int main()
{
    int x=10;
    int y=20;
    int temp;


    int *p,*p1;

    p=&x;
    p1=&y;


    temp=*p;
    *p=*p1;
    *p1=temp;

    printf("x = %d\ny = %d\n",x,y);

    return 0;
}
