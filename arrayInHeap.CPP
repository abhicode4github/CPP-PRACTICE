// PROGRAM TO CREATE AN ARRAY IN A HEAP USING POINTER 

// PROGRAM 

#include<iostream>
using namespace std;

int main()
{
    int *p=new int[5];
    p[0]=12;
    p[1]=13;
    cout<<p[1]<<endl;
    
    delete[] p;
    p=nullptr;
    
    return 0;
}

// OUTPUT 

13
