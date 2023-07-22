// strncpy(destination,source,length) function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[20]="Hello CPP! ";
    char s2[20]=" ";
    
    strncpy(s2,s1,3);
    cout<<s2<<endl;
    return 0;
}


// output 

Hel
