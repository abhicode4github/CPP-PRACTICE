// PROGRAM TO FIND THE SUM OF THE FACTORS OF THE NUMBER INPUT BY THE USER

#include<iostream>
using namespace std;

int main(){
    int n,i,sumofFactors=0;
    
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    cout<<"The sum of the factors of "<<n<< " is:"<<endl;
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           sumofFactors=sumofFactors+i;
        }
    }
    cout<<sumofFactors;
    return 0;
}

// OUTPUT 
Enter the value of n:
8
The sum of the factors of 8 is:
15
