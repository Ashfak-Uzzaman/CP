#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    int *ptr;
    int **pptr;   // এটা একটা double pointer. এটি অন্য pointer এর address contain করে।
int ***p;   // সবচেয়ে বাইরের pointer
    a=50;
    
    ptr=&a;
    
    pptr=&ptr;
    p=&pptr;
    printf("a = %d\n",a);
    printf("*ptr = %d\n",*ptr);
    printf("ptr = %x\n",ptr);
    printf("**pptr = %d\n",**pptr);
    printf("*pptr = %x\n",*pptr);
    printf("pptr = %x\n",pptr); 
    printf("&ptr = %x\n",&ptr); 
    
    printf("***p = %d\n",***p);

    

    return 0;
}