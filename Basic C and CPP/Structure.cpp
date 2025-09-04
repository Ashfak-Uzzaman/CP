#include <bits/stdc++.h>
using namespace std;

/*C doesn't allow us to declare a function inside a structure. This is mainly because C is a simple
language and doesn't support object-oriented programming. Function pointers can be stored inside a
structure.*/

struct student
{
    string name;
    int id;
    string dept;
    int batch;
    double cgpa;
};

struct st1
{
    int roll;
    char name[30];
    float cg;
};
struct st2
{
    int roll;
    char name[30];
    float cg;
};

struct person
{
    int age;
    char f_alpha;
    char name[30];
    float cgpa;

} p3; // globally dec

int main()
{
     struct person p1,p2;
    p1.age = 20;
    p1.f_alpha = 'A';
    strcpy(p1.name, "Ashfak");
    p1.cgpa = 3.8;

    p2.age = 30;
    p2.f_alpha = 'M';
    strcpy(p2.name, "Mizan");
    p2.cgpa = 3.99;

    printf("p1.age = %d\n",p1.age);
    printf("p1.age = %c\n",p1.f_alpha);
    printf("p1.name = %s\n",p1.name);
    printf("p1.age = %.2f\n",p1.cgpa);

    printf("p2.age = %d\n",p2.age);
    printf("p2.age = %c\n",p2.f_alpha);
    printf("p2.name = %s\n",p2.name);
    printf("p1.age = %.2f\n",p2.cgpa);

    printf("Enter Your age, first letter of name, name and CGPA :\n");
    scanf("%d %c %s %f",&p3.age,&p3.f_alpha,&p3.name,&p3.cgpa);
    printf("Age = %d, f_alpha = %c, name = %s, cgpa = %f\n",p3.age,p3.f_alpha,p3.name,p3.cgpa);

    struct person p[100];
    int i;
    printf("Enter name, age, and CGPA :\n");
    for(i=0;i<5;i++)
    {    
        scanf("%s %d %f",&p[i].name,&p[i].age,&p[i].cgpa);
    }
    for(i=0;i<5;i++)
    {
        printf("name=%s\nAge=%d\nCGPA=%.2f\n\n",&p[i].name,&p[i].age,&p[i].cgpa);
    }



    struct st1 s1;
    struct st2 s2;

    strcpy(s1.name,"Ashfaq");
    
    printf("%s\n",s1.name);

    
    strcpy(s2.name,"Rofiq");
    
    printf("%s\n",s2.name);


    return 0;
}