// PROGRAM TO FIND WHETHER A NUMBER INPUT BY USER IS A PALLINDROME NUMBER OR NOT.

PALLINDROME NUMBER 
( a number is reffered to as a pallindrome number , if the reverse of the  original number is same as the original number)

// PROGRAM 

#include<iostream>
using namespace std;

int main()
{
    int n,rem,reverse=0,ncheck;
    
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    ncheck=n;
    
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        reverse=reverse*10+rem;
    }
    
    if(reverse==ncheck){
    
    cout<<ncheck<< " is a Pallindrome number";
    }
    else
    {
        cout<<ncheck<< " is not a Pallindrome number";
    }
    
    return 0;
}

// OUTPUT 

Enter the value of n:
1221 
1221 is a pallindrome number
