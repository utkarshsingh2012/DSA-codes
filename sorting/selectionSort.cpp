#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
  int temp[n];
  for(int i = 0; i<n; i++){
    int min_ind = 0;
    for(int j = 1; j<n; j++){
      if(arr[j] < arr[min_ind])
        min_ind = j;
    }
    temp[i] = arr[min_ind];
    arr[min_ind] = INFINITY;
  }
  for(int i = 0; i<n; i++){
    arr[i] = temp[i];
  }
  for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main(){
  int arr[] = {-4,-2,7,-8,1};
  int n = 5;
  selectionSort(arr,n);
  
}