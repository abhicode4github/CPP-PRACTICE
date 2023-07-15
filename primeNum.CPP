// PROGRAM TO FIND WHETHER THE NUMBER INPUT BY THE USER IS A PRIME NUMBER OR NOT 

PRIME NUMBER --( a prime number is a number which is divisible by 1 and the number itself 
                                            or 
                we can say a number with only two factors can also be reffered to a prime number )

// PROGRAM 


#include<iostream>
using namespace std;

int main(){
    int n,i,Count=0;
    
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            Count++;
        }
    }
    if(Count==2)
    {
        cout<<n<<" is a prime number";
    }
    else 
    {
        cout<<n<<" is not a prime number";
    }
    
    return 0;
    
}

// OUTPUT 

Enter the value of n:
13
13 is a prime number
