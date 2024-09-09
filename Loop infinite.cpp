#include <iostream>
using namespace std;
int main()
{
    int i;

    // This is an infinite for loop as the condition
    // expression is blank
    for (;;) {
        cout << "This loop will run forever.\n";
    }



    while (1)
    {
        cout << "This loop will run forever.\n";
    }

    while (true)
    {
        cout << "This loop will run forever.\n";
    }



     do {
        cout << "This loop will run forever.\n";
    } while (1);

    return 0;

}
