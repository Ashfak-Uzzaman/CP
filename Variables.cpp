#include<iostream>                                  //  type variableName = value;
using namespace std;

int  main()
{
    string name="Ashfak";
    int age = 22;

    cout<<"This is "<<name<<"\nI am "<<age<<" years old"<<endl;  // there is a space before years.

    name="Jubayer Oni";
    age = 22;

    cout<<"This is "<<name<<"\nHe is also "<<age<<" years old"<<endl;
    int roll=1041;
    string Friend = "Sayed Jubayer Ahmad Oni";   // friend reserve word
    cout<<roll<<endl;
    cout<<Friend;

    int a=1023,b=20,sum=a+b;
    //sum=x+y;
    cout<<sum<<endl;

    int x, y, z;
    x = y = z = 50;
    cout << x + y + z<<endl;



    return 0;
}
/*
Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (like C++ keywords, such as int) cannot be used as names

*/
