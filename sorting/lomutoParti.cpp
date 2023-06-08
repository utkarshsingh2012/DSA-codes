#include<iostream>
using namespace std;

int lomuto(int arr[], int l, int h, int p){
  swap(arr[p], arr[h]);
  int pivot = arr[h];
  int i = l-1;
  for(int j = l; j<h; j++){
    if(arr[j] < pivot){
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[h]);
  
  for(int i = 0; i<=h; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return (i+1);
}

int main(){
  int arr[] = {10, 80,90,40,50,70};
  int l = 0, h = 5, p = 0;
  cout<<lomuto(arr,l,h,p)<<endl;
}