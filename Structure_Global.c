#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct time
{
    int h,m,s,f;
    int d,mo,y;
    char a[3];

} t;

void stwup()
{
    printf("%d %d %d\n",t.h,t.m,t.s);
     t.h=100;
}


int main()
{

    t.h=10,t.m=20,t.s=30;

    stwup();  // Complited
    printf("%d %d %d\n",t.h,t.m,t.s);
    return 0;
}