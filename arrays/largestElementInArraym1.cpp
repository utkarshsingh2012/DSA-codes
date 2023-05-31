#include<iostream>
using namespace std;

int getLargestElement(int arr[], int n){
  for(int i = 0; i<n; i++)
    {
      bool flag = true;
      for(int j = 0; j<n; j++){
        if(arr[i] < arr[j]){
          flag = false;
          break;
        }
      }
      if(flag == true)
        return i;
    }
    return -1;
}

int main(){
  int arr[] = {10,5,20,8};
  int n = 4;
  cout<<getLargestElement(arr, n);
}