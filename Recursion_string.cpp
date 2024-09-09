
#include <bits/stdc++.h>
using namespace std;

//string A(int i);     // function prototype for A()
string B();     // function prototype for B()
string C();     // function prototype for C()

string A()
{
    // if(i==0)
    // {
    //     return "Finish";
    // }
    // --i;
    cout<<"Hlw\n";
   
    return "Hello "+ A();
    
}

string B()
{
    return "my " + C();
}

string C()
{
    return "friends";
}

int main()
{
    string s = A();
    cout << s << endl;

    return 0;
}
