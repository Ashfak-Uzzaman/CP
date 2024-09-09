/*When you do not want others (or yourself) to override existing variable values, 
use the ' const ' keyword (this will declare the variable as "constant", which means 
unchangeable and read-only)   */

#include<iostream>
using namespace std;
int main()
{
    const double pi=3.1416;

    pi=3.1;      // error: assignment of read-only variable 'pi'



    return 0;
}
