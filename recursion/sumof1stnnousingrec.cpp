#include<iostream>
using namespace std;

int sumUptoN(int n){
  if(n == 0)
    return 0;
  return sumUptoN(n-1) + n;
}

int main(){
  int n;
  cin>>n;
  cout<<sumUptoN(n);
}