#include<stdio.h>

int fact(int i)
{
    if(i==2)
    {
        return 2;
    }
    if(i<2)
    {
        return 1;
    }
    return i*fact(i-1);


}

int main()
{
    int x = fact(2);  // max input for int 12
    printf("%d",x);
 
    return 0;
}