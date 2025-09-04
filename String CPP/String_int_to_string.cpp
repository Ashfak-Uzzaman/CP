#include <iostream>
#include <string>
using namespace std;
/*The to_string function in C++ has a time complexity of O(n), where n is the number of digits in the input number.*/
int main()
{
    int x = 648645.64;

    string s = to_string(x);   // O(n)
    cout << s << endl;

    string s1 = to_string(425.3652);  
    cout << s1 << endl;

    string s2 = to_string(425.0);
    cout << s2 << endl;

    s2 += " Hi Mr";
    cout << s2 << endl;

// C programming :    

    char final[100]; 

	float number = 98.12;
 
	sprintf(final, "%f", number);

	printf("\nString of given number is %s\n\n", final); 

    for(int i=0;final[i]!='\0';i++)
    {
        printf("%c\n",final[i]);

    }




    return 0;
}


/*This is because the function needs to convert each digit of the number to its corresponding character representation and then concatenate 
them to form the final string. The number of digits in the input number determines the number of times this process needs to be repeated, 
hence the linear time complexity.

Note that the actual time complexity of to_string may also depend on the underlying implementation and hardware architecture, as well as any 
optimizations that may be applied by the compiler. 
- Chat GPT */