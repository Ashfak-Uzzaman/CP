#include<stdio.h>
int s=0;
int p(int i)
{
    if(i==5)  
    {
        return 0; 
    }
    //p(i-1);
    printf("i= %d Hello world p = %d\n",i,p(i-1));
    return 1;
}

void print(int i)
{
    if(i==5)  
    {
        return; 
    }
    
    print(i-1);
    printf("i= %d Hi Mr\n",i);
    
}

int sum(int i)   //i=10
{
    
    if(i==0)  
    {
        return s; 
    }
    
    sum(i-1);
    s=s+i;    
}

int sum_2(int i)
{
    if(i==1)
    {
        return 1;
    }
    int s=i+sum_2(i-1);
    printf("S = %d  i = %d\n",s,i);
    return s;

}



int main()
{
    
    p(10);
    print(10);
    printf("Sum = %d\n\n",sum(10));
    int x=sum_2(10);
printf("Sum_2 = %d\n",x);

    return 0;
}