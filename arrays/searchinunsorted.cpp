#include<iostream>
using namespace std;

int search(int arr[], int n, int k){
  for(int i = 0; i< n; i++)
    if(arr[i] == k)
      return i;
  return -1;
}

int main(){
  int arr[] = {20,5,7,15,26};
  int n = 5;
  int k = 26;
  cout<<search(arr,n,k)<<endl;
}