#include<iostream>
using namespace std;

int fib(int n){
  if(n == 0)
    return 0;
  if(n == 1)
    return 1;
  
  return fib(n-2) + fib(n-1);
}

int main(){
  int n;
  cin>>n;
  for(int i = 0; i<=n; i++){
    cout<<fib(i)<<" ";
  }
}
