// find the length of a string 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="WELCOME";
    
    int count=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        count ++;
    }
    cout<<"Length is "<<count<<endl;
    return 0;
}

// OUTPUT 

Length is 7


// Change case from upper to lower     - ASCII Codes  (A=65 , a=97) difference between upper and lower is 32 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="WELCOME";
    
    
    for(int i=0;str[i]!='\0';i++)
    {
      str[i]=str[i]+32;
    }
    cout<<str<<endl;
    return 0;
}


// OUTPUT 

welcome 


// Change case to UPPER CASE 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="WELcOmE7";
    
    
    for(int i=0;str[i]!='\0';i++)
    {
      if(str[i]>=97 && str[i]<=122)
      {
          str[i]=str[i]-32;
      }
    }
    cout<<str<<endl;
    return 0;
}

// OUTPUT 

WELCOME7
