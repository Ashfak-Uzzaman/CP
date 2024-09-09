//Problems are under the code
#include<stdio.h>
#include<math.h>
int i=0;
void r(int a[],int n,int i)     //1
{
    if(i==n)
    {
        return;
    }
    r(a,n,i+1);
    printf("%d ",a[i]);
    
}

void pair(int a[],int n,int i)  //2
{
    if(i>n/2)
    {
        return;
    }
    pair(a,n,i+1);
    printf("%d %d\n",a[n/2+i],a[n/2-i]);
}

void remove_odd(int a[],int n,int i)  //3
{
    if(i==n)
    {
        return ;
    }
   if(a[i]%2!=0)
   {
    a[i]=0;
   }
   remove_odd(a,n,i+1);

}

void print_poly(int i, int n)  //4
{
    if(i<n)
    {
        if(i==0) printf("1");
        else
        {
            printf(" + x");
            if(i>1) printf("^%d", i);
        }
        print_poly(i+1, n);
    }// যেহেতু void তাই return লাগবে নাহ ।
}

int poly_series(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    //int s = 
    return pow(x,n-1)+poly_series(x,n-1);;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    r(a,n,0);

    printf("\n\n");

    pair(a,n,0);  // it is for odd n only

    printf("\n\n");
/*
    remove_odd(a,n,0);
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        printf("%d ",a[i]);
    }

     print_poly(0, n); 

    int x;
     printf("\n\nEnter x and n for poly series :");
     scanf("%d %d",&x,&n);

     printf("poly_series(x, n) = %d\n\n",poly_series(x, n));
*/
    return 0;
}

/*
Problem 1:
You will be given an array of integers, write a recursive solution to print it in reverse
order.
Input:
5
69 87 45 21 47
Output:
47 21 45 87 69

Problem 2:
Write a recursive function to print an array in the following order. 
[0] [n-1] [1] [n-2] ......... ......... [(n-1)/2] [n/2]
Input:
5
1 5 7 8 9
Output:
1 9
5 8
7 7

Problem 3:
Write a recursive program to remove all odd integers from an array. You must not use any 
extra array or print anything in the function. Just read input, call the recursive 
function, then print the array in main().
Input:
6
1 54 88 6 55 7
Output:
54 88 6

Problem 4:
Write a recursive solution to print the polynomial series for any input n: 1 + x + x2 + ................. + xn-1
Input:
5
Output:
1 + x + x^2 + x^3 + x^4

Problem 5:
Write a recursive solution to evaluate the previous polynomial for any given x and n. 
Like, when x=2 and n=5, we have 1 + x + x^2 + ................. + x^(n-1) = 31
Input:
2 5
Output:
31



*/