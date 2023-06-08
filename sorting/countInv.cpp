#include<iostream>
using namespace std;

int countInv(int arr[], int n){
  int count = 0;
  for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
      if(arr[i] > arr[j])
        count++;
    }
  }
  return count;
}

int main(){
  int arr[] = {2,3,4,5,6};
  int n = 5;
  cout<<countInv(arr,n);
}