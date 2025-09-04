/*
You might see some C++ programs that runs without the standard namespace library. The using namespace
std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects.
*/
/* The statement using namespace std is generally considered bad practice. The alternative to this statement is to
specify the namespace to which the identifier belongs using the scope operator(::) each time we declare a type.
*/
#include <iostream>
using namespace std;
int main() {
  std::cout << "Hello World!";
  std::cout<<"\nThis is C++";


  return 0;
}

