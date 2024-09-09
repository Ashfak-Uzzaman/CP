#include <iostream>
//#include<stdio.h>  
//#include <string>
using namespace std;

int main()
{

    int a[27] = {0};
    string s;
    getline(cin, s);
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        a[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != 0)
        {
            printf("%c = %d\n", 'a' + i, a[i]);
        }
    }

    return 0;
}