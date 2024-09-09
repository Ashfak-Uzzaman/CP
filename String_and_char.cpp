#include<iostream>
using namespace std;

int main()
{
    char a=65, b=66 ,c=97, x='M', y='n', z='p';
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;


    string name = "Md. Ashfak Uzzaman";
    cout<<name<<endl;

    cout<<name[1]<<endl;

    int Length = name.size();      // or,   Lenght = name.length()

    for(int i=0;i<Length;i++)
    {
        cout<<name[i]<<endl;
    }

    string myString = "Hello";
    myString[0] = 'J';
    cout << myString<<endl;


    return 0;
}
