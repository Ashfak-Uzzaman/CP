#include <stdio.h>
int main()
{
    char note[] = "You are not serious! Are you?";
    char *lol = note;
    puts(note);  
    printf("0.%s\n", lol);    // 0.You are not serious! Are you?
    printf("1.%s\n", lol++); // 1.You are not serious! Are you?
    printf("2.%s\n", lol);   // 2.ou are not serious! Are you?
    note[11] = '\0';
    printf("3.%s\n", note);  // 3.You are not
    printf("4.%s\n", ++lol); // 4.u are not
    printf("5.%s\n", --lol); // 5.ou are not
    printf("6.%c", note[2]); // 6.u

    return 0;
}