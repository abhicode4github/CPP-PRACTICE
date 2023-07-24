// copy () function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s="Welcome";
    
    char str[10];
    
    s.copy(str,s.length());
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

Welcome 



// 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s="Welcome";
    
    char str[10];
    
    s.copy(str,3);
    str[3]='\0';
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

Wel

// find_first_of() function  - it gives the first index of the character passed within the function in given string 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s="Welcome";
    
    cout<<s.find_first_of('l');
    
    cout<<endl;
    
    return 0;
}

// OUTPUT 

2



find_last_of() function - it gives the last index of the character passed within the function in given string 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s="Welcome";
    
    cout<<s.find_last_of('e');
    
    cout<<endl;
    
    return 0;
}

// OUTPUT 

6 


substr() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s="Programming";
    
    cout<<s.substr(3);
    
    cout<<endl;
    
    return 0;
}


// OUTPUT 

gramming 


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s="Programming";
    
    cout<<s.substr(3,4);
    
    cout<<endl;
    
    return 0;
}


// OUTPUT 

gram 



compare() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1="Programming";
    string s2="Programming";
    
    cout<<s1.compare(s2);
    
    cout<<endl;
    
    return 0;
}

// OUTPUT 

0 


