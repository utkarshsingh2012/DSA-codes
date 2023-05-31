#include<iostream>
using namespace std;

int deleteElement(int arr[], int n, int x){
  for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
  for(int i = 0; i<n; i++){
    if(arr[i] == x)
      for(int j = i+1; j<n; j++)
        arr[j-1] = arr[j];
      return n-1;
  }
  
  
  return -1;
}

int main(){
  int arr[] = {3,8,12,5,6};
  int n = 5;
  int x= 12;
  deleteElement(arr,n,x);
}