/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {2, 4, 6, 10, 15};
    // std::vector<int>ba,sa;
    auto sum = [&](int n, int arr[])
    {
        int ans=0;
        
        for(int i=0;i<n;++i)
        {
            cout<<arr[i]<<' ';
            ans+=arr[i];
        }
       
        return ans;
    };

    // parameter এ address pass না করলে & দেওয়া জরুরী না!!!
    auto addab = [](int a,int b) 
    {
        
        return a+b;
        
    };
    // without any parameter
    auto add = []() 
    {
        int a=10,b=20;
        return a+b;
        
    };


    int sumOfArrray = sum(5,a);

    int addition=add();

    int additionab=addab(200,500);

    cout<<'\n';
    cout<<sumOfArrray<<'\n';
    cout<<addition<<'\n';
    cout<<additionab<<'\n';



    return 0;
}
