#include<iostream>
#include<string>
using namespace std;

int main()
{
    string first_name = "Ashfak", last_name = "Chowdhury";

    string full_name = first_name + last_name ;

    cout<<full_name<<endl;

    first_name = "Jubayer";
    last_name = "Oni";

    full_name = first_name + " " + last_name;
    cout << full_name<<endl;

     first_name = "Jubayer";
    last_name = "Oni";

    full_name = first_name + " Ahmad " + last_name;
    cout << full_name<<endl;

    string x = "10";
    string y = "20";
    string z = x + y;   // z will be 1020 (a string)
    cout<< z <<endl;

/*If you try to add a number to a string, an error occurs

//Example

string x = "10";
int y = 20;
string z = x + y;  // an error occurs
*/

    return 0;
}


