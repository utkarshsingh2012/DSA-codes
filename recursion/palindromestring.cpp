#include<iostream>
using namespace std;

bool palindrome(string str){
  int n = str.length();
  for(int i = 0; i<n; i++){
    if(str[i] != str[n-1-i])
      return false;
  }
  return true;
}

int main(){
  string str = "vhjufdvke";
  cout<<palindrome(str)<<" ";
}