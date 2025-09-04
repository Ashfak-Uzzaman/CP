#include<iostream>            //   append = সংযোজন  // final_string = firststring.append( laststring );
using namespace std;

int main()
{
    string firstname = "Ashfak";
    string midname = "Uzzaman ";
    string lastname = "Chowdhury";

    firstname = firstname.append(midname);
    cout<<firstname<<endl;

    string fullname = firstname.append(lastname);
    cout<<fullname<<endl;






    return 0;
}
