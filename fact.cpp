 // Find the factorial of the number input by the user .

PROGRAM 
#include<iostream>
using namespace std;

int main()
{
    int n,i,fact=1;
    
    cout<<"Enter the value of n";
    cin>>n;
    
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<< n << "is "<< fact;
    return 0;
}

// OUTPUT 

Enter the value of n 9 
  Factorial of 9 is 362880
  
