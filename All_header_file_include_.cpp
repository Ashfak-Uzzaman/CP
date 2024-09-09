#include <bits/stdc++.h>
/* It is basically a header file that includes every standard library. In programming contests, using this file is a good
idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
In programming contests, people do focus more on finding the algorithm to solve a problem than on software
engineering. From, software engineering perspective, it is a good idea to minimize the include. If you use it actually
includes a lot of files, which your program may not need, thus increases both compile time and program size
unnecessarily.

Disadvantages of bits/stdc++ :
1. bits/stdc++.h is a non-standard header file of GNU C++ library. So, if you try to compile your code with some 
compiler other than GCC it might fail; e.g. MSVC do not have this header.
2. Using it would include a lot of unnecessary stuff and increases compilation time.
3. This header file is not part of the C++ standard and is therefore, non-portable, and should be avoided.
4. Moreover, even if there were some catch-all header in the standard, you would want to avoid it in lieu of 
specific headers, since the compiler has to actually read in and parse every included header (including recursively 
included headers) every single time that translation unit is compiled.


Advantages of bits/stdc++ :
1. In contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; especially
when your rank is time sensitive.
2. This also reduces all the chores of writing all the necessary header files.
3. You don’t have to remember all the STL of GNU C++ for every function you use.

source: https://www.geeksforgeeks.org/bitsstdc-h-c/

*/
using namespace std;

int main() {

    //cout << sqrt(25);
    int p=5;
    float x= p;
    x=floor(x/6);
    //x=x/6;
    cout<<x;
    return 0;
}
