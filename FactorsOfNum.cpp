// PROGRAM TO CALCULATE THE FACTORS OF A NUMBER ENTER BY THE USER

#include<iostream>
using namespace std;

int main(){
    int n,i;
    
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    cout<<"Factors of "<<n<< " are:"<<endl;
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}

// OUTPUT 
 Enter the value of n 
 9 
 Factors of 9 are:
 1
 3 
 9




