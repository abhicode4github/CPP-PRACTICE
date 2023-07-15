// PROGRAM TO FIND THE NUMBER INPUT BY THE USER IS A PERFECT NUMBER OR NOT.

PERFECT NUMBER --- perfect number is a number whose sum of the factors is equals to that of the twice of the number input by the user.

// PROGRAM 

#include<iostream>
using namespace std;

int main(){
    int n,i,sumofFactors=0;
    
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sumofFactors=sumofFactors+i;
        }
    }
    
    if(2*n==sumofFactors)
    {
        cout <<n<<" is a perfect number";
    }
    else 
    {
        cout <<n<< "is not a perfect numeber";
    }
    
    return 0;
}

// OUTPUT 


Enter the value of n : 
6
6 is a perfect number .
