#include<iostream>
using namespace std;

void bSortOpti(int arr[], int n){
  for(int i = 0; i<n; i++){
    bool swapped = false;
    for(int j = 0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped = true;
      }
      if(swapped == false)
        break;
    }
  }
  for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main(){
  int arr[] = {-4,-2,7,8,1};
  int n = 5;
  bSortOpti(arr, n);
}