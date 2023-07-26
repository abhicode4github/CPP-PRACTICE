// function Overloading for sum of numbers 

#include<iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}

int main()
{
    cout<<add(10,5)<<endl;
    cout<<add(12.9f,8.3f)<<endl;
    cout<<add(10,20,30)<<endl;
    
    return 0;
}

// output 

15
21.2
60
