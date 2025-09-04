#include<stdio.h>

void p_1(int i)
{                                                                              
    if(i==5)
    {
        return;
    }
    p_1(i-1);
    printf("i = %d Hello World\n",i);
}

int p_2(int i)
{
    if(i==5)
    {
        return 1;
    }
    printf("i = %d Hello  p_2 = %d\n", i, p_2(i-1));
    return 1;
}

int main()
{
    p_1(10);
printf("\n");
    
    p_2(10);
    

    return 0;
}