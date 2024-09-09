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

int main()
{
    struct student s1,s2;

    scanf("%s",&s1.name);
    scanf("%d",&s1.age);
    scanf("%lf",&s1.cg);

    s1.print(1041);   // my id

    scanf("%s",&s2.name);
    scanf("%d",&s2.age);
    scanf("%lf",&s2.cg);

    s2.print(1001);  //  BInoy ID

    return 0;
}


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

    int a,b,c;

    num()   // eti constructor ja ekti function. eti value initialaize kore rake. main() theke update korle change hoy
    {
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
   /* s1.a=100;
    s1.b=200;
    s1.c=300; */
    s1.print();
    s1.multi();
/*
    s2.a=10;
    s2.b=40;
    s2.c=30;  */
    s2.print();
    s2.multi();




    return 0;
}





