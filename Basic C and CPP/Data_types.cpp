/*
Type								Size (bytes)								Format Specifier

int									at least 2, usually 4							%d, %i
char								1												%c
float								4												%f
double								8												%lf
short int							2 usually										%hd
unsigned int						at least 2, usually 4							%u
long int							at least 4, usually 8							%ld, %li
long long int						at least 8										%lld, %lli
unsigned long int					at least 4										%lu
unsigned long long int				at least 8										%llu
signed char							1												%c
unsigned char						1												%c
long double							at least 10, usually 12 or 16					%Lf

*/




#include<iostream>
using namespace std;

/* int (2 or 4 bytes) - stores integers (whole numbers), without decimals, such as 123 or -123 .

    float	(4 bytes)- Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal 
    digits.

    double	(8 bytes) - Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal
    digits.

    char	(1 byte) - Stores a single character/letter/number, or ASCII values such as 'a' or 'B'. Char values are
    surrounded by single quotes.

    string - stores text, such as "Hello World". String values are surrounded by double quotes.

    bool (1 byte) - stores values with two states: true or false.                          cout<<true;          ===>1

*/
int main(){

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)  find output 0 or 1

    cout<<myNum<<endl;
    cout<<myFloatNum<<endl;
    cout<<myLetter<<endl;
    cout<<myText<<endl;
    cout<<myBoolean<<endl;


    unsigned int x = -2;     // -2 দিলে   4294967294 আসে ।
    cout<<x;



    return 0;
}
