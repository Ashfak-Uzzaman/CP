#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  

  printf("%p\n", &arr[1][2]);
  printf("%p\n", &arr[0][2]);

  cout << &arr[1][2] << endl;

  return 0;
}