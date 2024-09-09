/*
assign() -      It assigns new value to the vector elements by replacing old ones
push_back() -   It push the elements into a vector from the back
pop_back() -    It is used to pop or remove elements from a vector from the back.
insert() -      It inserts new elements before the element at the specified position
erase() -       It is used to remove elements from a container from the specified position or range.
swap() -        It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() -       It is used to remove all the elements of the vector container
emplace() -     It extends the container by inserting new element at position
emplace_back()- It is used to insert a new element into the vector container, the new element is added to the end of 
                the vector
*/
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
/*No, "vector" is not a class in C++, but it is a template class provided by the C++ Standard Library. The vector 
template class is used to implement dynamic arrays, which can be resized as needed.*/
int main()
{
    
    vector<int> v1;
    cout << v1.size() << endl; // v1.size()=0
    puts("");

    v1.push_back(34); // v1[0]=34
    v1.push_back(40); // v1[1]=40

    printf("%d\n", v1[0]);

    printf("%d\n", v1[1]);

    cout << v1.size() << endl; // v1.size()=2

    v1[0] = 77;
    printf("%d\n", v1[0]);

    printf("%d\n", v1[1]);

    v1.push_back(86); // v1[2]=29

    v1[1] = 29;
    printf("%d\n", v1[0]);

    printf("%d\n", v1[1]);

    printf("%d\n", v1[2]);

    cout << v1.size() << endl; // v1.size()=3

    printf("%d\n\n", v1.size());

    // Printing elements by using for loop
    for (int i = 0; i < v1.size(); i++)
    {
        cout << "v1[" << i << "] = " << v1[i] << endl;
    }

    // এভাবেও declear করা যায় ঃ

    vector<int> v2 = {5, 15, 10, 3, 13}, v3;
    v3 = v2;

    puts("");
    cout << v2.size() << endl; // v2.size()=5

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    puts("\nprinting v3:");
    cout << "size: " << v3.size() << endl; // v3.size()=5

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
  


    return 0;
}


