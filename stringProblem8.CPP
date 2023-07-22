// strncat(destination,source,length) function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[20]="Good ,";
    char s2[10]="Morning";
    
    strncat(s1,s2,5);
    cout<<s1<<endl;
    return 0;
}

// output 
Good ,Morni
