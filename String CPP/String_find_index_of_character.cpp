#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

int main()
{
    std::string str = "hello world";
    char c = 'w';

    // Sort the string
    std::sort(str.begin(), str.end());

    // Use binary_search to find the character
    auto it = std::lower_bound(str.begin(), str.end(), c);

    if (it != str.end() && *it == c)
    {
        // Found the character
        std::cout << "Found " << c << " at index " << std::distance(str.begin(), it) << std::endl;
    }
    else
    {
        // Character not found
        std::cout << "Did not find " << c << " in the string" << std::endl;
    }

    return 0;
}

/*
In this example, std::lower_bound is used to find the first element that is not less than c, which gives us an iterator to the character c if
it exists in the string. We then check that the iterator is not equal to str.end() (which would mean that c is not in the string), and that the
 value at the iterator is equal to c. If both conditions are true, we use std::distance to calculate the distance between the beginning of the
 string and the iterator, which gives us the index of the character in the string.
*/