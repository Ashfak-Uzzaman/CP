/*      
            set_name.count(item);
** The function returns 1 or 0
** It returns 1 if the value is present in the set.
** It returns 0 if it is not present in the set.
*/

#include <iostream>
#include<set>               // set_name.count(item);
using namespace std;
int main()
{
 
    int arr[] = { 14, 12, 15, 11, 10 };
 
    // initializes the set from an array
    set<int> s(arr, arr + 5);
 
    // check if 11 is present or not
    if (s.count(11))
        cout << "11 is present in the set\n";
    else
        cout << "11 is not present in the set\n";
 
    // checks if 18 is present or not
    if (s.count(18))
        cout << "18 is present in the set\n";
    else
        cout << "18 is not present in the set\n";
 
    return 0;
}