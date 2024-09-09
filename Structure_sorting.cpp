#include<bits/stdc++.h>
using namespace std;
 
struct employee
{
    char name[20];
    char address[20];
    int id;
    float salary;
    int index;
};
 
bool compsal(employee e1,employee e2 )
{
    if(e1.salary>e2.salary)
    {
        return false;
    }
    return true;
}
 
bool compidx(employee e1,employee e2 )
{
    if(e1.index>e2.index)
    {
        return false;
    }
    return true;
}
 
 
 
void display(employee e)
{
    cout<<e.name<<" "<<e.address<<" "<<e.id<<" "<<e.salary<<" "<<e.index<<endl;
 
}
 
 
int main()
{/*
    employee e1, *ptr;
    ptr=&e1;
 
    cin.get(e1.name,20);
    getchar();
    cin.get((*ptr).address,20);
    cin>>ptr->id>>ptr->salary>>ptr->index;
    display(e1);*/
    int n;
    cin>>n;
 
    employee e[n];
    for(int i=0;i<n;i++)
    {
        getchar();
        cin.get(e[i].name,20);
                getchar();
        cin.get(e[i].address,20);
 
        cin>>e[i].salary>>e[i].id;
        e[i].index=i;
 
 
    }
 
    sort(e,e+n,compsal);
 
 
    cout<<endl;
 
    for(int i=0;i<n;i++)
    {
         display( e[i])  ;
         cout<<endl;
    }
/*
   for(int i=0;i<n;i++)
    {
      cout<<e[i].name<<endl;
      cout<<e[i].address<<endl;
      cout<<e[i].id<<endl;
      cout<<e[i].salary<<endl;
      cout<<endl;
    }*/
 
    sort(e,e+n,compidx);
     cout<<endl;
 
    for(int i=0;i<n;i++)
    {
         display( e[i])  ;
         cout<<endl;
    }
 
    /*
     cout<<endl;
       for(int i=0;i<n;i++)
    {
      cout<<e[i].name<<endl;
      cout<<e[i].address<<endl;
      cout<<e[i].id<<endl;
    cout<<e[i].salary<<endl;
      cout<<endl;
    }*/
 
 
 
 
 
    return 0;
}