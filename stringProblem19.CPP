//  erase() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="programming";
    
    str.erase();
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

...Program finished with exit code 0



// push_back() function 


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="programming";
    
    str.push_back('H');
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

programmingH


// pop_back() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="programming";
    
    str.pop_back();
    
    cout<<str<<endl;
    
    return 0;
}

// OUTPUT 

programmin




// swap() function 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str1="programming";
    
    string str2="Language";
    
    str1.swap(str2);
    
    cout<<str1<<endl;
    cout<<str2<<endl;
    
    return 0;
}


// OUTPUT 

Language 
programming 
