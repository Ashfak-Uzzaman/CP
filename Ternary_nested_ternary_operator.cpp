#include <iostream>
using namespace std;

int main() // condition ? expression1 : expression2;  // have to same data type
{
    int marks = 50;

    string result = (marks >= 40) ? "passed" : "failed";

    cout << result << endl;

    int number = -4;


    number > 0 ? cout<< "Positive Number!"<<endl : cout<<"Negative Number!"<< endl;


    // Ternari
    string Result = (number == 0) ? "Zero" : ((number > 0) ? "Positive" : "Negative");

    cout << "Number is " << Result;

    return 0;
}
