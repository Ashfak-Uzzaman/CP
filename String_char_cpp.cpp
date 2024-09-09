#include <iostream>
#include <cstring> // or #include <string.h>
using namespace std;

int main()
{
    string a;
    char b[100];
    getline(cin, a);
    // getline(cin,b); // wrong!!
    gets(b);

    // int la=strlen(a);  // wrong!!
    int la = a.length();
    cout << "length of a: " << la << endl;

    int lb = strlen(b);
    cout << "length of b: " << lb << endl;
    int i;
    for (i = 0; i < la; i++)
    {
        cout << a[i] << endl;
        printf("%c\n", a[i]);
    }
    cout << "\n"<< "a[i]= " << a[i] << endl;
    printf("\na[i]= %d\n", a[i]);

    return 0;
}