#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}

// OR this works too...
int s = *(&arr + 1) - arr; // arr is equal to &arr[0] ;
printf("%d\n",s);

return 0;
}