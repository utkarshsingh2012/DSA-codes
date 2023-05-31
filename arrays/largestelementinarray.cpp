#include<iostream>
using namespace std;

int largestElement(int arr[], int n){
  int max = INT_MIN;
  for(int i = 0; i< n; i++){
    if(arr[i] > max)
      max = arr[i];
  }
  return max;
}

int main(){
  int arr[] = {10,5,20,84};
  int n = 4;
  cout<<largestElement(arr, n);
}