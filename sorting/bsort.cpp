#include<iostream>
using namespace std;

void bsort(int arr[], int n)
{
  for(int i = 0; i<n-i-1; i++){
    for(int j = 0; j<n-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
        
    }
  }
  for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main(){
  int arr[] = {-4,-2,7,8,1};
  int n = 5;
  bsort(arr, n);
}