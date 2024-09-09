#include<stdio.h>
//int count=0;
void p(int i)
{
    if(i==10)  // এই codition টাকে বলে 'basecase' মানে এটার basis এ Recursion stop হবে ।
    {
        return; // এই return না থাকলে চলতে থাকবে ।
    }
    printf("%d Hello world\n",i);
    i++;

    return p(i);
}

void prnt(int j)
{
    if(j==10)
    {
        return;
    }
   
    printf("%d Hi Mr\n",j);

    prnt(j+1);
}

void print(int j)
{
    if(j==10)
    {
        return;
    }
    printf("%d Guru\n",j);

    print(++j);  // j++ দিলে চলতে থাকবে, কারণ j এর মান আগে পাঠাবে তারপর বাড়বে।
}

void f(int x)
{
    if(x==10)
    {
        return;
    }
    printf("%d King Kin\n",x);

    f(x+1);
}

void f_infinity(int j)
{                 //এটা চলতে থাকবে  
    printf("%d Tends to infinity\n",j); 
    f_infinity(j);  //কারণ নিচে যাওয়ার আগেই call হয়ে যাচ্ছে ।
    
    if(j==10)  // এখানে আসার আগেই call হয়ে যাচ্ছে ।
    {
        return;
    }
   
}
int x(int i)
{
    if(i==5)
    {
        return 0;
    }
    x(i-1);
    printf("i = %d  Hello  \n",i);
    return 1;
}

int y(int i)
{
    if(i==5)
    {
        return 0;
    }
    
    printf("i = %d  Hello  y() = %d\n",i,y(i-1));
    return 1;
}


int main()
{
    p(0);

    prnt(0);
    f(0);
    print(0);

    //f_infinity(0);
    x(10);
    y(10);
    return 0;

}

/*#include<stdio.h>

void p(int i)
{
    if(i==10)
    {
        return;
    }
    printf("%d Hello world\n",i);
    i++;
    p(i);
}

void prnt(int j)
{
    if(j==10)
    {
        return;
    }
    printf("%d Hi Mr\n",j);

    prnt(j+1);
}

void print(int j)
{
    if(j==10)
    {
        return;
    }
    printf("%d Guru\n",j);

    print(++j);
}

void f(int x)
{
    if(x==10)
    {
        return;
    }
    printf("%d King Kinga\n",x);

    f(x+1);
}



int main()
{
    p(0);

    prnt(0);
    f(0);
   print(0);



    return 0;

}*/