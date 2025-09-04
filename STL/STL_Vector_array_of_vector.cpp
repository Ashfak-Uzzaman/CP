#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v[10];   //  This is an array of 10 vectors.
                         //  There are 10 vectors in this array.
    v[0].push_back(50);
    v[0].push_back(60);
    v[0].push_back(70);
    v[0].push_back(80);

    v[1].push_back(37);
    v[1].push_back(20);
    v[1].push_back(15);
    v[1].push_back(10);
    v[1].push_back(70);

    v[2].push_back(75);
    v[2].push_back(85);
    v[2].push_back(65);
    v[2].push_back(55);


    for(int i=0;i<10;i++)
    {
        for(auto u:v[i])            //   for(int j=0;j<4;j++)
        {                           //   {
            cout<<u<<" ";           //      cout<<v[i][j]<<" ";
        }cout<<"Hola\n";                //   }cout<<"\n";             
    }

    return 0;
}
