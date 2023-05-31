#include<iostream>
using namespace std;

int maxDif(int arr[], int n){
  int max = INT_MIN, min = INT_MAX;
  for(int i = 0; i<n; i++){
    if(arr[i] > max)
    {
      max = arr[i];
    }
    if(arr[i] < min){
      min = arr[i];
    }
  }
  return (max-min);
}

int main(){
  int arr[] = {100,10,3,4,5};
  int n = 5;
  cout<<maxDif(arr,n);
}