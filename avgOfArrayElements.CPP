// PROGRAM TO CALCULATE THE AVERAGE OF THE ELEMENTS OF THE ARRAY 

// OUTPUT 

#include<iostream>
using namespace std;

int main()
{
    int n,i;
    float num[100],sum=0.0,average;
    
    cout<<"Enter the numbers of elements : ";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cout<<i+1<<" Enter number: ";
        cin>>num[i];
        sum+=num[i];
    }
    
    average=sum/n;
    cout<<"The average of the elements of the array is: "<<average;
    
    return 0;
}

// OUTPUT 


Enter the number of elements : 7
1 Enter number: 6
2 Enter number: 8
3 Enter number: 9
4 Enter number: 4
5 Enter number: 5
6 Enter number: 9
7 Enter number: 3

The average of the elements of the array is: 6.28571
