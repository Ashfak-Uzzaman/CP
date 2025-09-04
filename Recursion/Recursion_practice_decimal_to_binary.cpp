
#include <iostream>
#include <algorithm>
using namespace std;

void decimal_to_binary(int n)
{
   

    if(n==0)
    {
        cout<<n%2;
        return;
    }


    decimal_to_binary(n/2);

    cout<<n%2;
    
}

int main()
{

    int n;

    cin >> n;
    decimal_to_binary(n);

  

    

    return 0;
}
