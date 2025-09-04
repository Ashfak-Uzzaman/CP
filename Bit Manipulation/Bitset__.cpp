#include <iostream>     /* https://www.geeksforgeeks.org/cpp-bitset-and-its-application/ */
#include <bitset>
using namespace std;

int main()       // indexing ডান থেকে বামে হবে
{                // Run time এ size নিবে না। আগে থেকে বলে দিতে হবে। by default bit গুলো 0 থাকবে।
    bitset<8> b; // 00000000
    cout << b << endl;
    b.set(); // সব bit 1 যাবে।

    cout << b << endl; // 11111111
    b.reset();
    cout << b << endl; // 00000000

    int i = 2;
    b[i] = 1;                    // i=2 no index  এর bit set হলো // 00000100
    cout << "ma: " << b << endl; // 00000100

    b.set(4);                    // 4 no index  এর bit set হলো // 00010100
    cout << "ma: " << b << endl; // 00010100

    bitset<8> b1(64);   // 64 এর binary
    cout << b1 << endl; // 01000000

    bitset<8> b2(string("1010"));
    cout << b2 << endl; // 00001010
    
    cout << b2.count() << endl; // কয়টা bit এ 1(set) আছে।  // 2

    cout << b2.size() << endl; // 8

    cout << b2.size() - b2.count() << endl; // কয়টা 0(not set) আছে।  // 6

    cout << b2.any() << endl; // একটা bit ও যদি 1 হয় তবে 1 return দিবে।

    cout << b2.none() << endl; // একটা bit ও যদি 1 হয় তবে 0 return দিবে।

    b2.set(2);          // 2 no index 1 হয়ে যাবে
    cout << b2 << endl; // 00001110

    b2.reset(2);        // 2 no index 0 হয়ে যাবে
    cout << b2 << endl; // 00001010

    b2 = b2 >> 1; // 1 ঘর right shift   // 00000101
    cout << b2 << endl;

    b2 = b2 << 1; // 1 ঘর left shift  //  00001010
    cout << b2 << endl;

    bitset<8> b3(string("1010"));

    cout << (b2 == b3) << endl; // 1 or 0

    cout << (b2 & b3) << endl; // AND // 00001010
    cout << (b2 | b3) << endl; // OR // 00001010
    cout << (b2 ^ b3) << endl; // X-OR // 00000000

    cout << (b2) << endl;  // 00001010
    cout << (~b2) << endl; // NOT //  11110101

    return 0;
}

/*
                        []	    Access operator
                        &	    Bitwise AND
                        |	    Bitwise OR
                        ~	    Bitwise NOT
                        ^	    Bitwise XOR
                        <<=	    Binary Right shift
                        >>=	    Binary Left shift
                        &=	    Assign the value of bitwise AND to the first bitset.
                        |=	    Assign the value of bitwise OR to the first bitset.
                        ^=	    Assign the value of bitwise XOR to the first bitset.

*/