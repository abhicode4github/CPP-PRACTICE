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
