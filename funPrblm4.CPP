// function to calculate m power n 

#include<iostream>
using namespace std;

int pow(int a,int b)
{
    int c=1;
    for(int i=1;i<=b;i++)
    {
        c=c*a;
    }
    return c;
}
int main()
{
    cout<<pow(2,5);
    return 0;
}

output 

32
