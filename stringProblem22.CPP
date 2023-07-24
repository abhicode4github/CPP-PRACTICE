// iterator

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="today";
    
    string::iterator it;
    
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    return 0;
}

// OUTPUT 

today 

// 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="today";
    
    string::iterator it;
    
    for(it=str.begin();it!=str.end();it++)
    {
        *it=*it-32;
    }
    cout<<str;
    cout<<endl;
    return 0;
}


// OUTPUT 

TODAY 



reverse iterate 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="today";
    
    string::reverse_iterator it;
    
    for(it=str.rbegin();it!=str.rend();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    return 0;
}

/// OUTPUT 

yadot 


// using for loop 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="today";
    
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}


// OUTPUT 

today 
