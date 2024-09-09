#include <iostream>
#include <algorithm>  // For std::max() & std::min()


int main()
{
    float a=-30.31;
    float b=20.25;
    
    float maxi=std::max(a,b);  // max variable নাম দেয়া যাবে নাহ ।
    float mini=std::min(a,b);
    
    std::cout<<maxi<<std::endl;
    std::cout<<mini<<std::endl;
  
    return 0;
}