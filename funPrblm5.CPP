// function Overloading - you can write more than one functions with the same name , but different argument lists . 

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
    int a=10,b=25,c=35,d,e;
    d=add(a,b);
    e=add(a,b,c);
    
    float m=3.5,n=5.8,f;
    f=add(m,n);
    
    cout<<"sum of two integer is "<<d<<endl;
    cout<<"sum of three integer is "<<e<<endl;
    cout<<"sum of two floats is "<<f<<endl;
    
    
    return 0;
    
}

// output 

sum of two integers is 35 
sum of three integers is 70 
sum of two floats is 9.3
