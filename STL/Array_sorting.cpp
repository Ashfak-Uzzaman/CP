#include<bits/stdc++.h>
using namespace std;

int main()
{
    float ara[]={2.3,5.9,4.7,6.1,5.3,2.6};

    cout<<"Ascending order :"<<endl;
    sort(ara, ara+6);
    for(int i=0;i<6;i++)
    {
        cout<<ara[i]<<endl;
    }

    cout<<"\nDescending order :"<<endl;

    sort( ara, ara+6, greater<int>() );  // float দিলেও কাজ করে
    for(int i=0;i<6;i++)
    {
        cout<<ara[i]<<endl;
    }

    return 0;
}