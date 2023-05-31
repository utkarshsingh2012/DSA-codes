#include<iostream>
using namespace std;

int moveZeroezToEnd(int arr[], int n){
  for(int i = 0; i<n;i++){
    if(arr[i] == 0){
      for(int j = i+1;j<n;j++)
        if(arr[j] != 0){
          swap(arr[i],arr[j]);
        }
    }
  }
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return n;
}

int main(){
  int arr[] = {0,0,0,10,0,0};
  int n = 6;
  moveZeroezToEnd(arr,n);
}