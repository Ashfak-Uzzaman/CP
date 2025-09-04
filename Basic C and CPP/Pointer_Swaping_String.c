#include <stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100]; //str2 তে reverse string store হবে *p2 এর মাধ্যমে ।
char *p1,*p2;
printf("Enter a String : ");
gets(str1);
p1=str1+strlen(str1)-1; // same as &str1[0]+strlen(str1)-1
p2=str2; // same as &str2[0]
while(p1>=str1)  // or, while(p1>=&str1[0])
{
*p2=*p1;
//printf("%d ",p2);
p2++; //&str2[1] , [2] ...
//printf("%d ",p1);
p1--;
}
*p2='\0';
printf("\nOriginal String: %s\n",str1);
printf("Reversed String: %s\n",str2);
/*
int a[5]={10,20,30,40,50};
int *p1=a,*p2=&a[5-1];
for(int i=0;i<5/2;i++)
{
  
    a[i]=*p2;
    a[5-1-i]=*p1;
    p1++;p2--;
}
for(int i=0;i<5;i++)
{
    printf("%d ",a[i]);
    
}*/

return 0;
}