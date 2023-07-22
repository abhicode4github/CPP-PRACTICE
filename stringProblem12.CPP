// check whether a string present or not 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[20]="Hello Programming";
    char s2[20]="ram";
   
    
    if(strstr(s1,s2)!=NULL)
    {
        cout<<strstr(s1,s2)<<endl;
        
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}

// output ramming 
