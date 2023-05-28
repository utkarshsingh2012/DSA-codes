#include<iostream>
using namespace std;

int findMissingNo(int arr[],int n){
  int res = 0;
  int missingno = 0;
  for (int i = 0; i<n; i++){
    res = res^arr[i];
  }
  for(int j = 1; j<=n+1; j++){
    missingno = j^res;
  }
  return missingno;
}

int main(){
  int arr[] = {1,4,3};
  int n = 3;
  cout<<findMissingNo(arr,n)<<endl;
}