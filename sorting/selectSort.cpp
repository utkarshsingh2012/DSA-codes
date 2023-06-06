#include<iostream>
using namespace std;

void selectSort(int arr[], int n){
  for(int i = 0; i<n; i++){
    int min_ind = i;
    for(int j = i+1;j<n;j++){
      if(arr[j] < arr[min_ind])
        min_ind = j;
    }
    swap(arr[min_ind], arr[i]);
  }
  for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main(){
  int arr[] = {-4,-2,7,-8,1};
  int n = 5;
  selectSort(arr,n);
  
}