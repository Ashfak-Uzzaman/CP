#include <iostream>
#include <numeric>
//using namespace std;
int main (){
   int arr[] = { 2, 5, 7, 8, 2, 6, 9 };
   int n = sizeof(arr) / sizeof(arr[0]);
   std::cout<<"Size of the array: "<<n<<std::endl;
   int sum = 0;
   sum = std::accumulate(arr, arr+n, sum);
   std::cout<<"The array sum is "<<sum;
   return 0;
}