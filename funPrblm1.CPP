// problem 1 

#include<iostream>
using namespace std;

int add(int x,int y){
    int z;
    z=x+y;
    return z;
}

int main()
{
    int a=10,b=15,c;
    c=add(10,15);
    cout<<"Sum is "<<c;
    return 0;
}

// Output 
Sum is 25 

