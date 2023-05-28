#include<iostream>
using namespace std;

void poweroftwo(int n){
  int count = 0;
  while(n>0){
    if((n & 1) != 0)
      count++;
    n = n>>1;
  }
  if(count == 1)
    cout<<"the number is power of two"<<endl;
  else
    cout<<"the number is not a power of two"<<endl;
}

int main(){
  int n;
  cin>>n;
  poweroftwo(n);
}