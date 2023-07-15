// PROGRAM TO FIND THE GCD(GREATEST COMMON DIVISOR) OF TWO NUMBERS 

(GCD  - The Greatest Common Divisor (GCD) of two or more numbers is the largest positive integer that divides each of the numbers 
       without leaving a remainder. It is also known as the Highest Common Factor (HCF).)

// PROGRAM 

#include<iostream>
using namespace std;

int main(){
    int m,n;
    
    cout<<"Enter the two numbers to find GCD"<<endl;
    cin>>m>>n;
    
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
    
    cout<< " The GCD of the numbers are: "<<m;
}

// OUTPUT 

Enter the two numbers to find GCD
54 24 
The GCD of the numbers are: 6
