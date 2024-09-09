#include<stdio.h>
/*pointer এর 0 address কে contain করতে পারে যেটা OS পড়ার সময় বুঝব । 
এই 0 address OS এর একটা special কাজে use হয় ।*/
 /*অনেক সময় pointer এর value 0 হওয়ার আগ পর্যন্ত loop চালাতে হয়।
 সেক্ষেত্রে *p=NULL লিখতে হবে। মানে এটি কোনো address contain করছে নাহ। এটি just একটা pointer */
/* SRK Sir :
It is always a good practice to assign a NULL value to a
pointer variable in case you do not have exact address to be
assigned. This is done at the time of variable declaration. A
pointer that is assigned NULL is called a null pointer
The NULL pointer is a constant with a value of zero defined
in several standard libraries.*/


int main()
{   int *ptr=NULL;
//  *ptr=10;  // The program will crash!!!
    printf("Null pointer %p\n",ptr);
    int var=0;
    int *pt=0; // এই 0 একটা special address. এটি hexa 0 .
    printf("Hello World a\n"); 
    printf("%x   A\n",&var);
    printf("Hello World b\n"); 
    printf("%x   B\n",pt);
    printf("Hello World c\n"); 
    printf("%d   C\n",*pt);/*এই লাইনে এসে print করার কিছু পাচ্ছে না। এটা comment করে দিলে নিচের 
                            লাইনগুলো execute হপে। printf("%d\n",*ptr); এইটা ছাড়া।   */


    printf("Hello World d\n");   // compiler did'nt print this line when previous line was active
/* cmd >> Process returned -1073741819 (0xC0000005) */  

    printf("%x   D\n",ptr);
    printf("%d   E\n",*ptr);

    return 0;
}

