#include <stdio.h>
int sum(int i)    
{                
    
    if(i==1)           
    {
        return 100; 
    }

    int s = i + sum(i-1); /*কোনো value return না দিলে মানে return type void হলে
                             যোগ করা যাবে নাহ ।*/
                          /*void value not ignored as it ought to be
                            int s = i + sum(i-1);*/    
    printf("s = %d   i = %d\n",s,i);
    return s;              // return i + sum(i-1);  // এটিও 1 to 10 যোগ করবে।    
}

int s(int i)    
{                
    
    if(i==1)           
    {
        return 1; 
    }
   
    return i + s(i-1); // এটিও 1 to 10 যোগ করবে। 
}


int main()
{ 

    int x = sum(10);
    printf("The ultimate = %d",x);

    int y = s(10);
    printf("\n\nThe Soma = %d",y);
    

    return 0;
}