#include<iostream>
using namespace std;

int remDuplicate(int arr[], int n){
  int res = 1;
  for(int i = 0; i<n; i++){
    if(arr[i] != arr[res-1]){
      arr[res] = arr[i];
      res++;
    }
  }
 return res;
}

int main(){
  int arr[] = {30,30,30,30,30,30};
  int n = 6;
  cout<<remDuplicate(arr, n);

}