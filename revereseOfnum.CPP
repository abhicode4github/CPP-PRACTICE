// PROGRAM TO FIND THE REVERSE OF A NUMBER INPUT BY THE USER 

PROGRAM 

#include<iostream>
using namespace std;

int main(){
    int n,rem,reverse=0;
    
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        reverse=reverse*10+rem;
    }
    
    cout<<"Reverse number of the number is : "<<reverse;
    
    return 0;
}

// OUTPUT 
Enter the value of n
35678
Reverse number of the number is 87653
