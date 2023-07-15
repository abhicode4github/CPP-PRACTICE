// PROGRAM TO IMPLEMENT BINARY SEARCH ON THE GIVEN ARRAY.

// PROGRAM 

#include<iostream>
using namespace std;

int main()
{
    int A[10]={6,8,13,17,21,22,25,28,30,35};
    int l=0,h=9,key,mid;
    
    cout<<"Enter the key value: ";
    cin>>key;
    
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<" Key found at "<<mid;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }
    cout<<" key not found ";
}

// OUTPUT 

Enter the key value: 17
key found at 3
