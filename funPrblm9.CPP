// pass by value 

#include<iostream>
 using namespace std;
 
 void swap(int a,int b)
 {
     cout<<a<<" "<<b<<endl;
     int temp;
     temp=a;
     a=b;
     b=temp;
     cout<<a<<" "<<b<<endl;
 }
 
 int main()
 {
     int x=10,y=20;
     swap(x,y);
     cout<<x<<" "<<y<<endl;
     return 0;
 }

 // output 

 10 20
 20 10
 10 20
