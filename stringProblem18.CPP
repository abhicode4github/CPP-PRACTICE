// append function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="Hello";
    
    str.append(" World");
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

Hello World

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="Hello";
    
    cout<<str.capacity()<<endl;
    
    str.append(" World");
    
    cout<<str.capacity()<<endl;
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

15
15
Hello World


insert() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="Hello";
    
    str.insert(3,"kk");
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

Helkklo

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="How you";
    
    str.insert(3," are");
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

How are you



// replace(n,m) function   

- here , n is the index in the string from where the replacement need to be  start , and m is the number of characters to be replaced from the specified position .

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="programming";
    
    str.replace(3,4,"kk");
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

prokkming
