#include<iostream>
using namespace std;

void leftRotateByd(int arr[], int n, int d){
  int a[d];
  for(int i = 0; i<d; i++)
  {
    a[i] = arr[i];
  }
  for(int j = 0; j<n; j++){
    if(j> (d-1)){
      arr[j-d] = arr[j];
    }
    
  }
  for(int i = 0; i<n; i++)
  {
    if(i <= (d-1)){
      arr[i+n-d] = a[i];
    }
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]= {10,5,30,15};
  int n = 4;
  int d = 4;
  leftRotateByd(arr,n,d);
  return 0;
}