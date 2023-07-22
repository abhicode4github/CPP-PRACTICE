// strcmp(str1,str2) function  - ASCII codes will be compared  

returns -ve,0,or +ve 

// PROBLEM 1.

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[20]="Hello";
    char s2[20]="Hello";
    
    cout<<strcmp(s1,s2)<<endl;
    return 0;
}

// output 

0

// PROBLEM 2. 
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[20]="hello";
    char s2[20]="Hello";
    
    cout<<strcmp(s1,s2)<<endl;
    return 0;
}

// output 

32
