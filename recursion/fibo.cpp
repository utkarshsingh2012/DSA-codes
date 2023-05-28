#include<iostream>
using namespace std;

int fibo(int n){
  if(n == 0 || n == 1){
    
    return n;
    cout<<n<<" ";
  }
  int k = fibo(n-2) + fibo(n-1);
  cout<< k ;
}

int main()
{
  int n = 5;
  fibo(n);
}