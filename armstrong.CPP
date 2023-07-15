// PROGRAM TO FIND WHETHER THE NUMBER INPUT BY THE USER IS AN ARMSTONG NUMBER OR NOT 

ARMSTRONG NUMBER --- ( armstrong number is a number in which the sum of the cubes of the digits of that input number is same as the input number)
                      (example 
                        num=153 
                       so, 1^3 + 5^3 + 3^3 = 1+125+27==153 , it implies thst 153 is an armstrong number .))

PROGRAM 

#include<iostream>
using namespace std;

int main(){
    int n,rem,sum=0,ncopy;
    
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    ncopy=n;
    
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem*rem*rem;
    }
    
    if(sum==ncopy)
    {
        cout<<ncopy<< " is an armstrong number";
    }
    
    else {
        cout<<ncopy<< " is not an armstrong number";
    }
    
    return 0;
}

// OUTPUT; 

Enter the value of n: 
153
153 is an armstrong number
