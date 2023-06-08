#include<iostream>
using namespace std;

void naiveParti(int arr[], int l, int h, int p){
  int temp[h-l+1], index = 0;
  for(int i = 0; i<=h; i++){
    if(arr[i] <= arr[p]){
      temp[index] = arr[i];
      index++;
    }
  }
  for(int i = l; i<=h; i++){
    if(arr[i] > arr[p]){
      temp[index] = arr[i];
      index++;
    }
  }
  for(int i = l; i<=h; i++){
    arr[i] = temp[i-l];
  }
  for(int i = l; i<=h; i++)
    cout<<arr[i]<<" ";
}

int main(){
  int arr[] = {3,8,6,12,10,7};
  int l = 0, h = 5, p = 4;
  naiveParti(arr, l, h, p);
}