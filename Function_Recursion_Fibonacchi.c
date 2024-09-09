#include <stdio.h>
int ar[100];
int fibo(int i)
{
    if (i == 0 || i == -1)
    {
        return 0;
    }

    else if (i == 2 || i == 1)
    {
        return 1;
    }

    // if(i==1)
    //{
    //     return 1;
    //}

    return fibo(i - 1) + fibo(i - 2);
}

int fibo_series(int i)
{
    if (i == 0 || i == -1)
    {
        return 0;
    }

    else if (i == 2 || i == 1)
    {
        return ar[i] = fibo_series(i - 1) + fibo_series(i - 2);
    }

    // if(i==1)
    //{
    //     return 1;
    //}

    return ar[i] = fibo(i - 1) + fibo(i - 2);
}
/*  1  2  3  4  5  6......  */ /*index*/
/*  0  1  1  2  3  5....... */
int f(int i)
{
    if (i == 2)
    {
        return 1;
    }
    if (i < 2)
    {
        return 0;
    }
    return f(i - 1) + f(i - 2);
}

int main()
{
    int a = 7;

    // printf("Entering \n");

    int x = fibo(a - 1);
    printf("%dth Fibonacchi number = %d\n", a, x);

    fibo_series(7);
    for (int i = 1; i < a; i++)
    {
        printf("%d ", ar[i]);
    }

    printf("\n\n%d ", f(7));

    return 0;
}
