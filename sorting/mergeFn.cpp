#include<iostream>
using namespace std;

void mergeFn(int a[], int low, int mid, int high){
  int left[mid+1];
  int right[high-mid];
  for(int i = 0; i<mid+1; i++){
    left[i] = a[i];
  }
  for(int j = 0; j<high-mid; j++){
    right[j] = a[mid+1+j];
  }
  int i = 0, j = 0, k = 0;
  while(i<mid+1 && j< high - mid)
  {
    if(left[i] <= right[j]){
      a[k] = left[i];
      k++;
      i++;
    }
    else{
      a[k] = right[j];
      k++;
      j++;
    }
  }
  while(i<mid+1){
    a[k] = left[i];
    i++;
    k++;
  }
  while(j<high-mid){
    a[k] = right[j];
    k++;
    j++;
  }
  for(int i = 0; i<=high; i++)
    cout<<a[i]<<" ";
}

int main(){
  int a[] = {10,15,20,11,30};
  int low=0, mid = 2, high = 4;
  mergeFn(a,low,mid,high);
}