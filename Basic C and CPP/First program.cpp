#include <iostream>      // work with input and output objects  // standard input output stream
using namespace std;               // means that we can use names for objects and variables from the standard library.
/*Namespace in C++ is the declarative part where the scope of identifiers like functions, the name of types, classes, variables, 
etc., are declared. The code generally has multiple libraries, and the namespace helps in avoiding the ambiguity that may occur 
when two identifiers have the same name.*/

/*An identifier is a sequence of characters used to denote one of the following: Object or variable name. Class, structure, or union name. 
Enumerated type name. Member of a class, structure, union, or enumeration.*/

/*All C++ variables must be identified with unique names.
These unique names are called identifiers.  - W3schools */


int main() {
  cout << "Hello World! ";
  cout << "Hello BD";
  cout << "Hello Ashfak";
  return 0;
}
/*
Note: The body of int main() could also been written as:

int main () { cout << "Hello World! "; return 0; }

Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.    */
/*
Line 1: #include <iostream> is a header file library that lets us work with input and output objects, such as cout
(used in line 5). Header files add functionality to C++ programs.

Line 2: using namespace std means that we can use names for objects and variables from the standard library.

Don't worry if you don't understand how #include <iostream> and using namespace std works. Just think of it as
something that (almost) always appears in your program.

Line 3: A blank line. C++ ignores white space. But we use it to make the code more readable.

Line 4: Another thing that always appear in a C++ program, is int main(). This is called a function. Any code inside
its curly brackets { } will be executed.

Line 5: cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text.
In our example it will output "Hello World!".

Note: Every C++ statement ends with a semicolon ; .

Line 6: return 0 ends the main function.
*/
