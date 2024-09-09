#include<iostream>
using namespace std;

int f(int n)
{
    int a[4],r;
    for(int i=0;i<4;i++)
    {
        r=n%10;
        a[i]=r;
        n=n/10;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int y;
    cin>>y;
    int x=y+1;
    while(f(x)==0)
    {
        x++;
    }
    cout<<x;

}