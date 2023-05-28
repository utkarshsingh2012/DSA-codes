#include<iostream>
using namespace std;

int sum(int n, int k){
  if(n == 0)
    return 0;
  return sum(n-1,k+1);
  cout<<k;
}

int main(){
  int n;
  cin>>n;
  int k = 1;
  cout<<sum(n,k);
}