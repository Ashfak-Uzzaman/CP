/*Array এর ক্ষেত্রে 1st eliment গুলো serially memory address এ store হয় */
#include<stdio.h>
int main()
{
    int a[ ] = { 10, 20, 30, 40, 50 };

    int *p = &a[0];  // অথবা *p = a;  // এক্ষেত্রে সে a এর ১ম index টাকে automatic দিয়ে দেয়।
    printf("p = %d  *p = %d\n",p,*p);

    printf("Printing array :\n");
    for(int i=0;i<4;i++)
    {
        printf("p = %x  *p = %d\n",p,*p);
        p++; 
    }

    printf("\np = %d  *p = %d\n\n",p,*p);
    
    *p=987;
     for(int i=0;i<5;i++)
    {
        printf("p = %x  *p = %d\n",p,*p);
        p--;
        
    }   

    return 0;
}
