1. Sum of n numbers using a function.

  // solution
  void SumOfN(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    int sum=0;
    sum=sum+n*(n+1)/2;
    cout<<"sum is "<<sum;
}
int main(){
    SumOfN();
    return 0;
}

2. Changing the char value to its equivalent integer type

   // solution
int main(){
    char x=128;
    cout<<(int)x<<endl;
    return 0;
}

 // enum 

what is enum data type?

answer In C++, an enumeration, also known as an enum, is a user-defined data type used to define a set of named constants.
It provides a way to associate symbolic names with integral values, making the code more readable and maintainable. 
Enumerations are typically used to represent a fixed set of values that a variable can take.

  
  3. Demonstrate an enum datatype example
  // solution
  enum day{mon,tue,wed,thu,fri,sat,sun};

int main()
{
    day d;
    d=tue;
    cout<<d<<endl;
}

output 
1

or , we can also assign initial value as per our choice 
example 
#include<iostream>

enum day{mon=1,tue,wed,thu,fri,sat,sun};
int main()
{
day d;
d=tue;

cout<<mon<<endl;
cout<<tue<<endl;
cout<<wed<<endl;
cout<<thu<<endl;
cout<<fri<<endl;
cout<<sat<<endl;
cout<<sun<<endl;

// output

1
2
3
4
5
6
7

4.  Program to calculate Area of circle 

// solution

void areaofcircle(){
    float radius;
    float area;
    cout<<"enter the radius ";
    cin>>radius;
    area=3.14*radius*radius;
    cout<<"Area of circle is "<<area;
}
int main(){
    areaofcircle();
    return 0;
}

output
enter the radius 7
Area of circle is 153.86

5.  Program to calculate netsalary.

   Program should take following as input:-
           1. Basic salary
           2. Percentage of Allowance.
           3. Percentage of Deduction .

           netsalary=Basic salary + Basic salary*percent of allowance/100 - Basic salary*percent of deduction/100

  // solution

  void salary(){
    float basic;
    float percentallow;
    float percentdeduct;
    float netsalary;
    
    cout<<"Enter the basic salary ";
    cin>>basic;
    cout<<"Enter the percent of the allowances ";
    cin>>percentallow;
    cout<<"Enter the percent of the deduction ";
    cin>>percentdeduct;
    netsalary=basic+(basic*percentallow/100)-(basic*percentdeduct/100);
    cout<<"The net salary is "<<netsalary;
}

int main(){
    salary();
    return 0;
}

Output :
 Enter the Basic salary 5000
Enter the percent of the allowances 20
Enter the percent of the deduction  5 
The net salary is 5750
    
