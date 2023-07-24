// Count Number of vowels , consonants, and words 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="how many words";
    
    int vowels=0,consonants=0,space=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'
        ||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowels++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else {
            consonants++;
        }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
    cout<<"Words: "<<space+1<<endl;
    return 0;
}



// OUTPUT 

Vowels: 3
Consonants: 9
Words: 3


/// Reverse a string and check a string is pallindrome 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="MADAM";
    string rev=" ";
    
    int len=(int)str.length();
    
    rev.resize(len);
    
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[i]=str[j];
    }
    
    rev[len]='\0';
    
    if(str.compare(rev)==0)
    {
        cout<<" string is a Pallindrome"<<endl;
    }
    else {
    cout<<"string is Not a Pallindrome";
    }
    
    
    return 0;
}

// OUTPUT 

string is a Pallindrome 

