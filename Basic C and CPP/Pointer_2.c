#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("%d\n",a);
    printf("%d\n",*p);

    a=20;
    printf("%d\n",a);
    printf("%d\n",*p);

    *p=15;
    printf("%d\n",a);
    printf("%d\n",*p);

    (*p)++;
    printf("%d\n",a);
    printf("%d\n",*p);

    *p += *p;
    printf("%d\n",a);
    printf("%d\n",*p);
    
    int z = *p + 100;
    *p = z;
    printf("%d\n",a);
    printf("%d\n",*p);





    return 0;
}
