// find the username in email address 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string email="john123@gmail.com";
    
    int i=(int)email.find('@');
    
    string uname=email.substr(0,i);
    
    cout<<"username is "<<uname<<endl;
    
    
    return 0;
}

// OUTPUT 

username is john123
