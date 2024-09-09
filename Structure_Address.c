#include <stdio.h>

typedef struct Student student;
struct Student
{
    int roll_no;
    char name[30];
    char branch[40];
    int batch;
};  /*এভাবেও typedef করা যায় */



typedef struct info
{
    int id;
    char name[20];
    int salary;
    double rating;
    char branch[30];

    struct info *ptr;

} info;

int main()
{
    info p1,p2;
    

    printf("%d  %p\n", &p1,&p1);

    printf("%d  %p\n", &p1.id, &p1.id);

    printf("%d  %p\n", &p1.name, &p1.name);

    printf("%d  %p\n", &p1.salary, &p1.salary);

    printf("%d  %p\n", &p1.rating, &p1.rating);

    printf("%d  %p\n", &p1.branch, &p1.branch);
    printf("\n\nHello\n\n");

    printf("%d  \n", p1.ptr);
    printf("%d  %p\n\n", &p2,&p2);



    p1.ptr=&p2;

    printf("Enter id for p2 :\n");
    scanf("%d",&p2.id);
    printf("%d \n", p1.ptr->id);













    return 0;
}