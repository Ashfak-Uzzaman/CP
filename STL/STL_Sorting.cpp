#include <iostream>
#include <algorithm>
#include <vector>
/*This function can be used to sort an array or a vector or a string. The underlying sorting algorithm is called
the gcc_sort which is a hybrid algorithm which is implemented in a very efficient way. O(NlogN)
If you manually write a sorting algorithm, it’ll be slower than this.
*/
using namespace std;
// sort(a.begin() + start_index, a.begin() + end_index+1)
int main()
{
    // sort(v.begin()+2, v.begin()+8);     //indx 2 থেকে 8 এর আগ পর্যন্ত
    vector<int> a = {1, 45, 54, 71, 76, 12};

    // Print the vector
    cout << "Vector: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // Sort the vector in descending order
    sort(a.begin(), a.end(), greater<int>());

    // Print the reversed vector
    cout << "Sorted Vector in descending order:\n";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    int ar[10] = {5, 3, 6, 8, 18, 10, 32, 22, 1, 19};
    sort(ar + 2, ar + 8); // index 2 থেকে 8 এর আগ পর্যন্ত
    for (auto u : ar)
        cout << u << ' ';
    cout << endl;

    cout<<"now:\n\n";
    vector<int> ara = {153, 63, 8, 6, 180, 100, 32, 22, 1, 19};

     sort(ara.begin()+2, ara.begin()+6);
     for(auto u:ara)cout<<u<<' ';cout<<'\n';

    return 0;
}