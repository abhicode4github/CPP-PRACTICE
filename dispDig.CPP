// PROGRAM TO DISPLAY THE DIGITS OF THE NUMBER INPUT BY THE USER:

PROGRAM 

#include<iostream>
using namespace std;

int main(){
    int n,rem;
    
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    cout<<"The digits of "<<n<< " are:"<<endl;
    
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        cout<<rem<<endl;
    }
    
    return 0;
}

// OUTPUT 

Enter the value of n:
23678
The digits of 23678 are:
8
7
6
3
2
