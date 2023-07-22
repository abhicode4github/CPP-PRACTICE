#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[100];
    cout<<"Enter the string to find length ";
    cin.getline(s,100);
    cout<<strlen(s)<<endl;
    return 0;
}

// output 

Enter the string to find length hello world 
17
