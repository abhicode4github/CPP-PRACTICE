// PROGRAM TO PERFORM LINEAR SEARCH ON THE ARRAY INPUT BY THE USER .

PROGRAM 

#include<iostream>
using namespace std;

int main()
{
    int A[10],i,key,n=10;
    
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the key value ";
    cin>>key;
    
    for(i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<key<<" found at index : " <<i;
            return 0;
        }
    }
    cout<<"Element not found ";
    
    return 0;
}

// OUTPUT 

Enter the elements of array
5
7
6
3
7
8
9
6
2
3
Enter the key value 7
7 found at index : 1
