// #include<iostream>
using namespace std;

float add(float x,float y){
    float z;
    z=x+y;
    return z;
}

int main()
{
    float x=2.3,y=7.9,z;
    z=add(x,y);
    cout<<"Sum is "<<z;
    return 0;
}

// output 
Sum is 10.2
