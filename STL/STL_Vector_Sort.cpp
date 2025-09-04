#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
/*This function can be used to sort an array or a vector or a string. The underlying sorting algorithm is called 
the gcc_sort which is a hybrid algorithm which is implemented in a very efficient way. O(NlogN)
If you manually write a sorting algorithm, it’ll be slower than this.
*/
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(450);
    v.push_back(990);
    v.push_back(390);
    v.push_back(5291);
    v.push_back(1215);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    puts("");

    sort(v.begin(), v.end());  //**//
  //sort(v.begin()+2, v.begin()+8);     //indx 2 থেকে 8 এর আগ পর্যন্ত
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    puts("");

    //sort(v.begin(), v.end(), greater<int>());

    sort(v.rbegin(),v.rend());  //উপরেরটা আর এইটা same

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }

    vector<int> v1;
    v1.push_back(4560);
    v1.push_back(990);
    v1.push_back(3790);
    v1.push_back(1215);
    v1.push_back(5291);

    puts("");
    puts("");
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\t";
    }


    sort(v1.begin()+1, v1.begin() + 3);  
// sort(v1.begin()+0, v1.begin() + 3);

    puts("");
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\t";
    }


    return 0;
}