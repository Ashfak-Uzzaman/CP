/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>  // Repetitive Permutation
using namespace std;

vector<string>Repetitive;
string a;

void f(char s[],int n,int i,int r)  // nPr
{
    if(i==r)
    {
        //cout<<a<<'\n';
        Repetitive.push_back(a);
        return;
    }

    for(int j=0;j<n;++j)
    {
        a.push_back(s[j]);
        f(s,n,i+1,r);
        a.pop_back();
    }


}


int main()
{
    char s[100];cin>>s;
    int r;cin>>r;
    int n=strlen(s);  
    f(s,n,0,r);   // nPr
    cout<<"Number of Repetitive permutation = "<<Repetitive.size()<<'\n';




    return 0;
}
