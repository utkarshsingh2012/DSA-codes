#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
  for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++)
    {  if(arr[i] > arr[j]){
        swap(arr[i], arr[j]);
      }
    }
  }
  for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main(){
  int arr[] = {2,0,7,8,1};
  int n = 5;
  bubblesort(arr, n);
}