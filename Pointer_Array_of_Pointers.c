#include<stdio.h>
int main()
{
    int a[]={10,20,50};
    int *p[3];  //Garbage আছে  
    
  //int *p[3]={&a[0],&a[1],&a[2]};   // এভাবে assign করা যায় ।
    for(int i=0;i<3;i++)
    {
        printf("p[] = %x\n",p[i]);
        printf("*p[] = %d\n\n",*p[i]);
    }
    printf("\n");
  
    for(int i=0;i<3;i++)
    {
        p[i]=&a[i];
    }

    for(int i=0;i<3;i++)
    {
        printf("p[] = %x\n",p[i]);
        printf("*p[] = %d\n\n",*p[i]);
    }

    return 0;
}