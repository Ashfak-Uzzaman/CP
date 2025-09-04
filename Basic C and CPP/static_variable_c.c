/*
A static int variable remains in memory while the program is running. A normal or auto variable is destroyed when a function
call where the variable was declared is over.

Static variables are allocated memory in data segment, not stack segment
*/

#include <stdio.h>
int cnt(int n)
{
    static int d=1;

    printf("%d ",n);
    printf("%d ",d);
    d++;

    if(n>1)
    {
        cnt(n-1);
    }

    printf("%d ",d);  // As d is static hence the value of d in stack will be the final value of d (4) will print by this line
   

}
int fun()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{

    printf("%d\n", fun()); // 1
    printf("%d\n", fun()); // 2




/* Static variables (like global variables) are initialized as 0 if not initialized explicitly. For example in the below program,
value of x is printed as 0, while value of y is something garbage */

    static int x;
    int y;
    printf("%d\n", x);
    printf("%d\n", y);
/*

0 
[some_garbage_value] 

*/

    cnt(3);




    return 0;
}


/*
//In C, static variables can only be initialized using constant literals. For example, following program fails in compilation.

#include<stdio.h>
int initializer(void)
{
    return 50;
}
  
int main()
{
    static int i = initializer();
    printf(" value of i = %d", i);
    getchar();
    return 0;
}

*/

/*
Static functions in C:
https://www.geeksforgeeks.org/what-are-static-functions-in-c/



*/
