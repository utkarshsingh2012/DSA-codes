//optimizing using brian keningam's algo
#include<iostream>
using namespace std;

bool powerof2(int n){
  int count = 0;
  while(n>0){
    n = (n&(n-1));
    count++;
  }
  if(count == 1)
    return true;
  else
    return false;
}

int main(){
  int n;
  cin>>n;
  cout<<powerof2(n)<<endl;
}