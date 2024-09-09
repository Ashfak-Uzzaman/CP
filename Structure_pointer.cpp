#include<stdio.h>
#include<string.h>
struct student
{
    int age;
    float cgpa;
};

struct student2 {
    int roll_no;
    char name[30];
    char branch[40];
    int batch;
};

struct Triangle
{
    double base;
    double hight;
    double area;
};

int main()
{
    student stu; 
    
    struct student2 s1;  // C++ এ struct না লিখলেও চলে
    struct student2*ptr = &s1;
 
    s1.roll_no = 27;
    strcpy(s1.name, "Kamlesh Joshi");
    strcpy(s1.branch, "Computer Science And Engineering");
    s1.batch = 2019;
    
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Branch: %s\n", ptr->branch);
    printf("Batch: %d\n", (ptr)->batch);

// এভাবেও possible
    printf("\nAgain:\n\n");    
    printf("Roll Number: %d\n", (*ptr).roll_no); // () must
    printf("Name: %s\n", (*ptr).name);
    printf("Branch: %s\n", (*ptr).branch);
    printf("Batch: %d\n", (*ptr).batch);

    struct student *s3,s4;

    s4.age = 20;
    s3 = &s4; 
    printf("\n%d\n",s3->age);
    s4.cgpa=3.50;
    printf("%.2f\n",s4.cgpa);
    s3->cgpa=3.99;
    printf("%.2f\n",s3->cgpa);


    int *n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Your entered number : %d\n",n);
/*  printf("Your entered number : %d\n",*n);  // for this line ,next line will not execute.
    printf("Hello Ashu\n");      */                   
/////////////////////////////////////////////////////////////////////

    struct Triangle *t1;

    //t1->





    return 0;
}

 

