#include <stdio.h>

int main()
{

    char *p;

    scanf("%s", p);

    printf("%s\n", p);   // cin cout makes problem

    printf("%p\n", p);



    char c1 = 'A', c2 = 'B', c3 = 'C';

    char *p3 = &c3;
    char *p2 = &c2;
    char *p1 = &c1;

    printf("%c %c %c\n", *p1, *p2, *p3);

    return 0;
}
