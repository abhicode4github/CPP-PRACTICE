// function Overloading for minimum of numbers 
1. Minimum of 2 integers 
2. Minimum of 3 integers 
3. Minimum of 2 floats 

#include<iostream>
using namespace std;

int Min(int a,int b)
{
    if(a>b)
    return b;
    else 
    return a;
}

int Min(int a,int b,int c)
{
    if(a<b && a<c)
    {
        return a;
    }
    else if(b<c)
    {
        return b;
    }
    else 
    {
        return c;
    }
}

float Min(float a,float b)
{
    if(a>b){
    return b;
    }
    else
    return a;
}

int main()
{
    cout<<Min(10,5)<<endl;
    cout<<Min(12.9f,8.3f)<<endl;
    cout<<Min(10,20,30)<<endl;
    
    return 0;
}

// output 

5
8.3
10
