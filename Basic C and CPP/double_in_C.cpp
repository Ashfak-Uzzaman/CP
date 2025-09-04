/*                  %lf
1. It has 15 decimal digits precision.
2. This data type supports up to 15 digits of storage.
3. It is an integer data type but with decimals.
4. For double data type, the format specifier is %lf.
5. It is suitable to use in the programming language to prevent errors
while rounding off the decimal values because of its wide range.
6. It is costly in terms of memory usage.

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double da = 1.0;
    double db = -4.0000000;
    double dc = 3.9999999;
    double x = 3.907;

    cout << dc << endl;
    cout << x << endl;  // 3.907000
    printf("%lf\n", x); // 3.907000
    printf("%.13lf\n", x); // 3.9070000000000

    return 0;
}