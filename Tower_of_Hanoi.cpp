#include <iostream>
using namespace std;
/* Brief:
https://www.freecodecamp.org/news/analyzing-the-algorithm-to-solve-the-tower-of-hanoi-problem-686685f032e3/

*/

/*
n = 3:
a -> c
a -> b
c -> b
a -> c
b -> a
b -> c
a -> c
--------------------------------
n = 4:
a -> c
a -> b
b -> a
a -> c
c -> b
c -> a
a -> c
a -> b
b -> a
b -> c
c -> b
b -> a
a -> c
a -> b
b -> a

*/

void Toh(int n, char A, char B, char C) // Abdul Bari
{
    if (n > 0)
    {
        //cout << "Move disk " << n << " from " << A << " to " << C << endl; // It is not possible to solve preorder
        Toh(n - 1, A, C, B);
        cout << "Move disk " << n << " from " << A << " to " << C << endl;
        Toh(n - 1, B, A, C);
        //cout << "Move disk " << n << " from " << A << " to " << C << endl; // It is not possible to solve postorder
    }
}


void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) // Geek for Geeks
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}


void TOH(int n, int A, int B, int C) // Abdul Bari
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        cout << "Move disk from " << A << " to " << C << endl;
        TOH(n - 1, B, A, C);
    }
}


int main()
{
    int n;
    cin >> n;

    TOH(n, 1, 2, 3);

    cout << endl;

    Toh(n, 'A', 'B', 'C');

    cout << endl;

    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}