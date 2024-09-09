#include<stdio.h>
#include<math.h>

void squar(int *p)
{
    *p = *p * (*p);

}

int hexa(double *p)  // pow() double এর জন্য 
{
    *p = pow(*p,6);
}





int main()
{
    int num = 10;
    printf("num = %d\n",num);
    squar (&num);
    printf("Now num = %d\n",num);

    double a = 5;
    printf("a = %.0lf\n",a);
    
    hexa(&a);

    printf("Now a = %.0lf\n",a);
    


    return 0;

}
