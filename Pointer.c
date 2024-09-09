/*Pointer একটা variable যা অন্য variable এর address store করে।*/
#include<stdio.h>
int main()
{
    int x=10;
    int y=20;
    int *p;  //*p=&x; /*এটাকে পড়া হয় 'integer pointer p'                       */
    p=&x;  //  এটা ১ম লাইনে করা যায় ঐ ভাবে ।
/*  ১ম লাইনের পর address store করতে আর * দিতে হবে নাহ।*/    
/*  পরবর্তীতে* যতবার *p দেয়া হবে সেটা represent করবে p এ store হওয়া address যে variable এর তার value
                                                                      এই *p কে পড়া হয় 'content of p'     */
    printf("y = %d\n",y);
    printf("Address of y = %u\n",&y);
    printf("Address of y (Hexa) = %X\n",&y);

    printf("x = %d\n",x);
    printf("Address   of    x = %x\n",&x);

    printf("(Address contained by p)  p = %x\n",p);
    
    printf("Content of p (*p) = %d\n",*p); //এই *p কে পড়া হয় 'content of p'
    printf("Address of p variable(&p) = %x\n",&p);

    p=&y;

    printf("(Address contained by p)  p = %x\n",p);
    
    printf("Content of p (*p) = %d\n",*p);
    printf("Address of p variable(&p) = %x\n",&p);


    return 0;
}
/* warning: assignment makes integer from pointer without a cast [-Wint-conversion]
যদি *p declear না করে শুধু p = &x দেয়া হয় ।
*/
