#include <iostream>
//#include <conio.h>
using namespace std;
int main()
{
    char str[100];
    int i;
    cout<<"Please enter a string!\n";
    cin>>str;
    cout<<"Characters of the given Strings!\n";
    for(i=0; str[i]!= '\0'; i++){
        cout<<"The character of "<<" "<<i<<" position : "<<str[i] <<"\n";
    }
    
    //getch();  ##include <conio.h> use করতে হবে ।
    return 0;
}