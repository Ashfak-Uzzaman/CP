#include <iostream>
using namespace std;          // pointerVariable = new dataType;

int main() {

/* C++ Dynamic Memory Allocation */    

  // declare an int pointer
  int* pointInt;   /* Notice that we have used the pointer to allocate the memory dynamically. This is because the new operator 
                      returns the address of the memory location */

  // declare a float pointer
  float* pointFloat;

  // dynamically allocate memory
  pointInt = new int;    // new operator returns the address of the memory location
  pointFloat = new float;

  // assigning value to the memory
  *pointInt = 45;
  *pointFloat = 45.45f;

  cout << *pointInt << endl;
  cout << *pointFloat << endl;

  // deallocate the memory
  delete pointInt;  /* Once we no longer need to use a variable that we have declared dynamically, we can deallocate the memory 
                       occupied by the variable.  */
  delete pointFloat;


  /* C++ new and delete Operator for Arrays */

  int num;
  cout << "Enter total number of students: ";
  cin >> num;
  float* ptr;
    
  // memory allocation of num number of floats
  ptr = new float[num];

  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
  }

  // ptr memory is released
  delete[] ptr;

  return 0;
}



/*
new is an operator in C++ that is used to dynamically allocate memory during runtime. 

It does not belong to any specific header file and is a part of the C++ language syntax.

However, to use new with certain data types, you may need to include the appropriate header file. For example, if you are 
allocating memory for an array of integers, you will need to include the <cstdlib> header file, which defines the int data type. 
Similarly, if you are allocating memory for an array of characters, you will need to include the <cstring> header file, which 
defines the char data type.
*/