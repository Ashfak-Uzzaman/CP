#include <string.h>
#include <iostream>       // memset(array_name, value_that_will_assign, sizeof(array_name));  
#include<string>         // Time Complexity: O(N)
using namespace std;


// memset(array_name, value_that_will_assign, sizeof(array_name));  

// memset(array_name, value, size);

int main()
{
    bool x[5];
    memset(x, true, sizeof(x));
    for (int i = 0; i < 5; i++)
        cout << x[i] << " ";
    cout << endl;

    memset(x, false, sizeof(x));
    for (int i = 0; i < 5; i++)
        cout << x[i] << " ";
    cout << endl;


    int b[2][3];
    memset(b, 0, sizeof(b));  // 0 ছাড়া আর কিছু দিলে গারবেজ আসবে

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }cout<<"\n";
    }

    int a[5];
  
    // all elements of A are zero
    memset(a, 0, sizeof(a));   // 0 ছাড়া আর কিছু দিলে গারবেজ আসবে
    for (int i = 0; i < 5; i++)
        cout << a[i] << "\t";
    cout << endl;
  
    // all elements of A are -1
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << "\t";
    cout << endl;

    char str[] = "asdf";   //"geeksforgeeks";
    int l=sizeof(str);
    cout<<"sizeof(str): "<<l<<endl;
    cout<<"strlen(str): "<<strlen(str)<<endl;
    memset(str, 't', sizeof(str)-1);   //or, memset(str, 't', strlen(str));
    

    
    // cout << str;
    return 0;
}


