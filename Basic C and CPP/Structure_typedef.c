#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[30];
    long long id;
} detail;

int main()
{
    detail un;
    strcpy(un.name,"Leading University");
    un.id = 12686858765346587;
    printf("%s\n",un.name);
    printf("Id No : %lld\n\n",un.id);
    
    detail dpt;

    printf("Enter Depertment :");
    scanf("%s",dpt.name);
    printf("Enter Batch :");
    scanf("%lld",&dpt.id);
    printf("\nDepertment : %s\n",dpt.name);
    printf("Batch : %lld\n",dpt.id);

    detail st[5];

    for(int i=0;i<5;i++)
    {
        printf("Enter name :");
        scanf("%s",&st[i].name);
        printf("Enter ID :");
        scanf("%lld",&st[i].id);
    }
    printf("\n\n");
    for(int i=0;i<5;i++)
    {
        printf("Name : %s\n",st[i].name);
        printf("ID : %lld\n\n",st[i].id);
    }

    return 0;
}