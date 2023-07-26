// maximum number 

#include<iostream>
using namespace std;

int maxim(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int x=10,y=15,z=5,r;
    
    r=maxim(x,y,z);
    cout<<"Maximum num is "<<r<<endl;
    return 0;
}

// output 

Maximum num is 15
