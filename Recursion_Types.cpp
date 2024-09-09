#include <iostream>
#include <algorithm>
using namespace std;

// void odd(int i);
// void even(int i);

// void odd(int i)
// {
//     if (i < 1)
//     {
//         return;
//     }
//     even(i - 1);
//     cout << i + 1 << " ";
// }

// void even(int i)
// {
//     if (i < 1)
//     {
//         return;
//     }
//     odd(i - 1);
//     cout << i - 1 << " ";
// }

void fun(int n,int i)
{cout<<i<<"  ";
    if(n<=0)
    {
        return;

    }
 
    cout<<n<<endl;
    fun(2*n,i+1);
    cout<<i<<"  ";
    cout<<n<<endl;

}

int main()
{
    // int n;
    // cin >> n;

    // if (n % 2 == 0)
    // {
    //     even(n);
    // }
    // else
    // {
    //     odd(n);
    // }

    fun(10,1);

    return 0;
}