#include<iostream>
using namespace std;

void printOneToN(int n){
  if(n == 0)
    return;
  printOneToN(n-1);
  cout<<n<<" ";
}

int main(){
  printOneToN(5);
  return 0;
}