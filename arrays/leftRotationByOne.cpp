#include<iostream>
using namespace std;

void leftRotateByOne(int arr[], int n){
  int c = arr[0];
  for(int i = 0; i<n;i++){
    if(i>0){
      arr[i-1] = arr[i];
    }
  }
  arr[n-1] = c;
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]= {1,2,3,4,5,6};
  int n = 6;
  leftRotateByOne(arr,n);
  return 0;
}