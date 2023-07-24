// at() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1="Programming";
    
    cout<<s1.at(5);
    
    cout<<endl;
    
    return 0;
}

// OUTPUT 

a

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1="Programming";
    
    s1[5]='K';
    
    cout<<s1;
    
    cout<<endl;
    
    return 0;
}

// OUTPUT 

ProgrKmming

cocatenate two  strings 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1="Programming";
    
    string s2=" World";
    
    s1=s1+s2;
    cout<<s1;
    cout<<endl;
    return 0;
}


// OUTPUT 

Programming World

