#include <stdio.h>
#include<iostream>

int cnt(int n)
{
    static int d=1;

    printf("%d ",n);
    printf("%d ",d);
    d++;

    if(n>1)
    {
        cnt(n-1);
    }

    printf("%d ",d);  // As d is static hence the value of d in stack will be the final value of d (4) will print by this line
   

}

int main()
{
    cnt(3);

    return 0;
}