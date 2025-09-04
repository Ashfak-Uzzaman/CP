#include <stdio.h>
#include <string.h>
struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{
    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text"},s2;
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    
    // Copy s1 values to s2
    s2 = s1;
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
    
    // Modify values
    s1.myNum = 30;
    s1.myLetter = 'C';
    strcpy(s1.myString, "Something else");

    // Print values
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}