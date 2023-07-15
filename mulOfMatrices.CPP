// MULTIPLICATION OF TWO MATRICES 

// PROGRAM 

#include<iostream>
using namespace std;

int main()
{
    int a[10][10],b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
    
    cout<<"Enter the rows and columns of first matrix"<<endl;
    cin>>r1>>c1;
    cout<<"Enter rows and columns of second matrix"<<endl;
    cin>>r2>>c2;
    
    if(c1!=r2)
    {
        cout<<"Cannot be multiplied";
        return 0;
    }
    
    // storing elements of first array 
    
    cout<<endl<<"Enter elements of matrix 1: "<<endl;
    
    for(i=0;i<r1;++i)
    {
        for(j=0;j<c1;++j)
        {
            cout<<"Enter element a"<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
    }
    
    // storing elements of second matrix
    
    cout<<endl<<"Enter elements of matrix 2: "<<endl;
    
    for(i=0;i<r2;++i)
    {
        for(j=0;j<c2;++j)
        {
            cout<<"Enter element b"<<i+1<<j+1<<":";
            cin>>b[i][j];
        }
    }
    
    
    // multiplying the matrix a and b ,storing in array mult
    
    for(i=0;i<r1;++i)
    {
        for(j=0;j<c2;++j)
        {
            mult[i][j]=0;
            for(k=0;k<c1;++k)
            {
                mult[i][j]=mult[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    
    // display the multiplication of two matrix 
    
    cout<<endl<<"output matrix: "<<endl;
    
    for(i=0;i<r1;++i)
    {
        for(j=0;j<c2;++j)
        {
            cout<<" "<<mult[i][j];
            if(j==c2-1)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}


// OUTPUT 

Enter the rows and columns of first matrix
2
3
Enter the rows and columns of second matrix
3
4
Enter elements of matrix 1:
Enter element a11:3
Enter element a12:4
Enter element a13:5
Enter element a21:2
Enter element a22:3
Enter element a23:1

Enter elements of matrix 2:
Enter element b11:4
Enter element b12:5
Enter element b13:6
Enter element b14:7
Enter element b21:8
Enter element b22:9
Enter element b23:3
Enter element b24:4
Enter element b31:5
Enter element b32:6
Enter element b33:6
Enter element b34:8

output matrix: 

69 81 60 77 
37 43 27 34
