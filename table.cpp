question. Write a Program in CPP to print the table of a number.
  #include<iostream>
using namespace std;

int main()
{
    int n,i;
    
    cout<<"enter the value of n";
    cin>>n;
    
    for(i=1;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<i*n;
        cout<<endl;
    }
    return 0;
}

// OUTPUT  

enter the value of n 7 
  7*1=7
  7*2=14
  7*3=21
  7*4=28
  7*5=35
  7*6=42
  7*7=49
  7*8=56
  7*9=63
  7*10=70
  
