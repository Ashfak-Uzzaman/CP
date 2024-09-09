// str_name.erase(size_type idx, size_type len )
// str_name.erase (index , ঐ index থেকে যতটি erase করবো)
#include <iostream>
#include <string>

using namespace std;

void erase()
{
    
}

int main()
{
    string str = "0123456";  //Hello World!

    cout << "Before erase : ";
    cout << str << "\nlength: " << str.length()<<endl;

    // Deletes 3 characters from index number 1.
    str.erase(1, 3);        // std:: লাগবে নাহ।

    cout << "After erase : ";
    cout << str << "\nlength: " << str.length()<<endl;
    cout<<str[0]<<" "<<str[1]<<" "<<str[2]<<" "<<str[3]<<" "<<str[4];


     str.erase(); //  পুরা string erase করবে

   

    return 0;
}

/*  With std::  */

/*
int main()
{
    std::string str("Hello World!");

    std::cout << "Before erase : ";
    std::cout << str << std::endl;

    // Deletes 4 characters from index number 1
    str.erase(1, 4);

    std::cout << "After erase : ";
    std::cout << str;

    return 0;
}

*/