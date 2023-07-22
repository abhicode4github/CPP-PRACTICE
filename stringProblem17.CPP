
// PROBLEM 1. 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="hello";
    
    cout<<str.length()<<endl;
    
    cout<<str<<endl;
    
    return 0;
}

5
hello 

// PROBLEM 2. 

// capacity() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="Hello";
    
    cout<<str.capacity()<<endl;
    
    cout<<str<<endl;
    
    return 0;
}

// output 

15
hello 


/// PROBLEM 3. 

resize() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="Hello";
    
    str.resize(50);
    
    cout<<str.capacity()<<endl;
    
    cout<<str<<endl;
    
    return 0;
}

// output 

50
hello 

// PROBLEM 4. 

max_size() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="Hello";
    
    str.resize(50);
    
    cout<<str.max_size()<<endl;
    
    cout<<str<<endl;
    
    return 0;
}

// output 

4611686018427387903
Hello

// PROBLEM 5. 

clear() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="Hello";
    
    str.clear();
    
    cout<<str.length()<<endl;
    
    cout<<str<<endl;
    
    return 0;
}

// output 

0 

// PROBLEM 6. 

empty() function

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="";
   if(str.empty())
   {
       cout<<"It is empty"<<endl;
   }
   
   else
   {
       cout<<"String is"<<str<<endl;
   }
    return 0;
}

// output 

It is empty 




