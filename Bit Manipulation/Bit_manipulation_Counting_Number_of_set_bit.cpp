#include <iostream>
using namespace std;

int main()
{
    int n = 455; // 111000111

    int cnt = 0;
    // using left shift

    while (n != 0)
    {
        if (n & 1)
        {
            cnt++;
        }
        n = n >> 1;
    }
    cout << "Number of set bit = " << cnt << endl;

    n = 455; // 111000111

    cnt = 0;

    // using right shift
    for (int i = 0; i < 32; i++)
    {
        if (n & (1 << i))
        {
            cnt++;
        }
    }
    cout << "Number of set bit = " << cnt << endl;

    return 0;
}