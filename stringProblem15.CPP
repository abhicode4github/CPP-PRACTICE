// strtol(str1) function - it is used to convert string to long int 

// strtof(str1,NULL) - it is used to convert string to float  

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[10]="23445";
    char s2[10]="72.567";
    
    long int X=strtol(s1,NULL,10);
    float y=strtof(s2,NULL);
    
    cout<<X<<endl<<y<<endl;
    return 0;
}

// output 

23445
72.567
