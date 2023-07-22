// strcpy(destination,source) function

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[20]="Hello CPP! ";
    char s2[20];
    
    strcpy(s2,s1);
    cout<<s2<<endl;
    return 0;
}

// output 

Hello CPP!
