// PROGRAM TO FIND THE SUM OF THE ELEMENTS OF THE GIVEN ARRAY 

PROGRAM 

#include<iostream>
using namespace std;

int main()
{
    int A[7]={4,8,6,9,5,2,7};
    int n=7,sumofArrayelements=0;
    
    for(int i=0;i<n;i++)
    {
        sumofArrayelements=sumofArrayelements+A[i];
    }
    cout<<"Sum of the elements of the given array is "<< sumofArrayelements;
    return 0;
}
    
// OUTPUT 

Sum of the elements of the given array is 41
