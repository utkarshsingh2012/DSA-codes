#include<iostream>
using namespace std;

int removeDuplicateElements(int arr[], int n){
  int temp[n];
  temp[0] = arr[0];
  int res = 1;
  for(int i = 0; i<n; i++){
    if(temp[res-1] != arr[i])
      {
        temp[res] = arr[i];
        res++;
      }
  }
  for(int i = 0; i<n; i++)
    arr[i] = temp[i];
    return res;
}

int main(){
  int arr[] = {30,30,30,30,30,30};
  int n = 6;
  cout<<removeDuplicateElements(arr, n);

}