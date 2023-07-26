// recursion function   - a recursive function is one which call itself 
                        - a function call itself is called recursion 

// program 

#include<iostream>
 using namespace std;
 
 void fun(int n)
 {
     if(n>0)
     {
         cout<<n<<endl;
         fun(n-1);
     }
 }
 
 int main()
 {
     int x=5;
     fun(5);
 }

 // output 

 5
 4
 3
 2
 1


 /// 
 #include<iostream>
 using namespace std;
 
 void fun(int n)
 {
     if(n>0)
     {
          fun(n-1);
         cout<<n<<endl;
        
     }
 }
 
 int main()
 {
     int x=5;
     fun(5);
 }

 /// output 

 1
 2
 3
 4
 5
 
                        

