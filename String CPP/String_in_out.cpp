#include<iostream>
#include<string>
using namespace std;

int main()
{// cin>>  ইউজ করলে input নেওয়ার সময় space দিলে পরেরগুলো print দেখায় নাহ ।

/*  cin>> considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display
a single word (even if you type many words)                   */
/*  string name;
    cout<<"Enter your name :";
    cin>>name;
    cout<<"Your name is :"<<name<<"\n";

/*  We often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable
as second                        */

    string fullname;
    cout<<"Enter full your name :";

    getline(cin,fullname);

    cout<<fullname<<endl;





    return 0;
}
