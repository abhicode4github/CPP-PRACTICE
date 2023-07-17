// INTRODUCTION TO THE PONTERS IN CPP, USING A SIMPLE PROGRAM 

#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p=&a;
    
    cout<< a <<endl;
    cout<< &a <<endl;
    cout<< p <<endl;
    cout<< &p <<endl;
    cout<< *p <<endl;    // dereferencing 
    
    return 0;
}

// OUTPUT 

10                         // a 
0x7ffdf3bd7d0c             // &a
0x7ffdf3bd7d0c             // p
0x7ffdf3bd7d10             // &p
10                         // *p
