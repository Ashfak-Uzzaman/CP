#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, World!";
    std::string substring = "World";
    std::string replacement = "Universe";

    std::cout << str << std::endl;
    std::cout << "Length: " << str.length() << std::endl;

    // Replace the substring "World" with "Universe"
    str.replace(7, 3, replacement);
    std::cout << str << std::endl;
    std::cout << "Length: " << str.length() << std::endl;

    ////////////////////////////////////

    std::string name = "Ashfak Chowdhury!";
    std::string title = "Chowdhury";
    std::string nick_name = "Apurbo";

    std::cout << name << std::endl;
    std::cout << "Length: " << name.length() << std::endl;

    // Replace the title "Chowdhury" with "Apurbo"
    name.replace(7, title.length(), nick_name);
    std::cout << name << std::endl;
    std::cout << "Length: " << name.length() << std::endl;

    


    return 0;
}
