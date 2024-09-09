//#include<iostream>
#include<stdio.h>

struct student
{
    char name[30];
    int age;
    double cg;

    void print(int id)
    {
        printf("%s %d %.2lf %d\n",name,age,cg,id);
    }


};

struct num
{

    int a;
    int b;
    int c;

    num()   // eti constructor ja ekti function. eti value initialaize kore rake. main() theke update korle change hoy
    {         // constructor এর নাম structure এর নাম হতে হবে।
        a=10;
        b=20;
        c=30;
    }

    ~num()  // eita programe sesh howar por memory free kore dey
    {
        a=b=c=0;
    }


    void print( )
    {
        printf("%d\n",a+b+c);
    }
      void multi( )
    {
        printf("%d\n",a*b*c);
    }

};

int main()
{
    struct num s1,s2;
    s1.a=62;
    s1.b=25;
    s1.c=31; 
    s1.print();
    s1.multi();

    s1.print();
    s1.multi();
    
    /*
    s2.a=10;
    s2.b=40;
    s2.c=30;  */
    s2.print(); // s2
    s2.multi();




    return 0;
}