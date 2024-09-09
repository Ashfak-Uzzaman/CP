/*Write a program to count the frequency of each element of an array.*/
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    
    cout << "Enter number of elements of the array:\n";
    cin >> n;
    int a[n];
     int f[n];
    cout << "Enter the elements of the array:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];   
    }

   
    int c;
    // int f[n];   Why I find wrong ans when I declear array here? I faced same problem in past.  

    cout<<"Frequency of the array:\n";
    for(int i=0;i<n;i++)
    {
        c=1;
        
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                f[j]=-1;
            }
        }

        if(f[i]!=-1)
        {
            f[i]=c;
            cout<<"Element "<<a[i]<<" : "<<f[i]<<" times"<<endl;
        }
        
    }

    

   
    return 0;
}
