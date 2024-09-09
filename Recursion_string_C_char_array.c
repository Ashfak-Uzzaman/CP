#include <stdio.h>

void print_reverse(char *p)
{
    if (*p == '\0')
    {
        return;
    }

    print_reverse(p + 1);

    printf("%c", *p);

    return;
}



void print_reverse_2(char *p)
{
    if (*p != '\0')
    {
        print_reverse(p + 1);
  

        printf("%c", *p);

        return;    // must return এই জাগায় দিবে
    }

    return;
}



int main()
{
    char s[] = "The C Programming Language";
    print_reverse(s);

    printf("\n");

    print_reverse_2( s);

    printf("\nSuccessfully Trminated!!!\n");

    return 0;
}