#include<iostream>
using namespace std;

int hoareParti(int arr[], int l, int h){
  int pivot = arr[l];
  int i = l-1, j = h+1;
  while(true){
    do{
      i++;
    }while(arr[i] < pivot);
    do{
      j--;
    }while(arr[j] > pivot);

    if(i >= j){
      return j;
    }
    swap(arr[i], arr[j]);
  }
  
}

int main(){
  int arr[] = {10, 80,90,40,50,70};
  int l = 0, h = 5;
  cout<<hoareParti(arr,l,h);
}