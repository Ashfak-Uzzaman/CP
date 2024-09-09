/*
https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-namespaces#:~:text=Namespace%20in%20C%2B%2B%20is%20the,identifiers%20have%20the%20same%20name.
*/

/*
Namespace in C++ is the declarative part where the scope of identifiers like functions, the name of types, classes, variables, 
etc., are declared. The code generally has multiple libraries, and the namespace helps in avoiding the ambiguity that may occur 
when two identifiers have the same name.


For example, suppose you have two functions named calculate(), and both are performing different tasks. One calculate() function 
is doing the multiplication, and another is doing the addition. So in this case,to avoid ambiguity, you will declare both the 
functions in two different namespaces. These namespaces will differentiate both the functions and also provide information 
regarding both the functions.
*/


#include <iostream>   
namespace col
{
    int data=20;

    int sq(int i)
    {
        i*=i;
        return i;
    }
}

using namespace col; 
using namespace std; 


int main()
{
    
    float data=55.23;

//   std::cout<<data<<std::endl;
//    std::cout<<col::data<<std::endl;

//     std::cout<<sq(4)<<std::endl;

      cout<<data<<endl;
   cout<<col::data<<endl;

    cout<<sq(4)<<endl;
    
    


    return 0;

}

