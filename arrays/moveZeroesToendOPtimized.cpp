#include<iostream>
using namespace std;

void moveZeorestoEnd(int arr[], int n){
  int count = 0;
  for(int i = 0; i<n; i++){
    if(arr[i] != 0){
      swap(arr[i], arr[count]);
      count++;
    }
  }
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[] = {0,0,0,10,0,0};
  int n = 6;
  moveZeorestoEnd(arr,n);
}