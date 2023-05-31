#include<iostream>
using namespace std;

void leader(int arr[], int n){
  int cL = arr[n-1];
  cout<<cL<<" ";
  for(int i = n-2; i>=0;i--){
    if(arr[i] > cL)
    {
      cL = arr[i];
      cout<<cL<<" ";
    }
  }
}

int main(){
  int arr[] = {7,10,4,3,6,5,2};
  int n = 7;
  leader(arr,n);
}