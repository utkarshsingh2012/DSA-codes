#include<iostream>
using namespace std;

void kthBit(int n, int k){
  if(((n>>(k-1)) & 1) != 0)
    cout<<"yes"<<endl;
  else
    cout<<"no"<<endl;
}
int main(){
  int n,k;
  cin>>n;
  cin>>k;
  kthBit(n,k);
}