#include<iostream>
using namespace std;

int main()
{
    char s[100];
    char s2[100];
    cout<<"Enter your name ";
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;
    cin.ignore();
    cout<<"Enter your name again ";
    cin.get(s2,100);
    cout<<"Welcome "<<s2<<endl;
    return 0;
}

output 

Enter your name aaa bbb ccc 
Welcome aaa bbb ccc
Enter your name again ddd eee
Welcome ddd eee
