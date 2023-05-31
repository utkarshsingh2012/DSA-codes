#include<iostream>
using namespace std;

int getSecondLargest(int a[], int n){
  int largest = 0;
  int res = -1;
  for(int i = 0; i<n; i++){
    if(a[i] > a[largest]){
      res = largest;
      largest = i;
    }
    else if(a[i] != a[largest]){
      if(res == -1 || a[i] > a[res])
        res = i;
    }
  }
  return res;
}

int main(){
  int arr[] = {21,10,15,23,29};
  int n = 5;
  cout<<getSecondLargest(arr,n);
}