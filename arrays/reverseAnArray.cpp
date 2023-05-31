#include<iostream>
using namespace std;

void reverseArray(int arr[], int  n){
  int mid = n/2;
  for(int i = 0; i<mid; i++){
    swap(arr[i], arr[n-1-i]);
  }
  for(int i= 0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main(){
  int arr[] = {1,2,3,4,5,6};
  int n = 6;
  reverseArray(arr,n);
}