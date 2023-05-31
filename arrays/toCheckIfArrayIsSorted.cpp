#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
  for(int i = 0; i<n-1; i++)
    if(arr[i+1] < arr[i])
      return false;
  return true;
}

int main(){
  int arr[] = {8,10,10,12,13,5};
  int n = 6;
  cout<<isSorted(arr,n);
}