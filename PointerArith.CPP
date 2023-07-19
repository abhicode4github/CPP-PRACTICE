// PROGRAM TO PERFORM ARITHMETIC OPERATIONS OF POINTER 


PROGRAM 1.

#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    p++;
    cout<<*p<<endl;           // pointer will move to second element
    
    p=p+3;          // pointer will be pointing on 10 
    
    cout<<p[-4]<<endl; // it will print 2
    
    return 0;
    
}


// OUTPUT 

4 
2 

PROGRAM 2. 

#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    cout<<*p<<endl;
    p++;
    
    cout<<*p<<endl;
    p--;
    
    cout<<*p<<endl;
    
    return 0;
    
}

// OUTPUT 

2
4
2


PROGRAM 3 .

#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    cout<<p<<endl;
    
    cout<<p+2<<endl;
   
    return 0;
    
}

// OUTPUT 

0x7ffd70653980
0x7ffd70653988

PROGRAM 4 . 

#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    cout<<*p<<endl;
    
    cout<<*(p+2)<<endl;
   
    return 0;
    
}

// OUTPUT 

2
6

PROGRAM 5 .

#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;
    }
    return 0;
    
}

// OUTPUT 

2
4
6
8
10


PROGRAM 6.

#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    for(int i=0;i<5;i++)
    {
        cout<<*(A+i)<<endl;
    }
    return 0;
    
}

// OUTPUT 

2
4
6
8
10

