#include<iostream>
using namespace std;

void missingno(int arr[], int n){
  for(int i = 0; i<n; i++){
    int count = 0;
    for(int j = 0; j<n; j++){
      if(arr[i] == arr[j])
        count++;
    }
    if(count%2 != 0)
      cout<<arr[i];
  }
}

int main(){
  int arr[] = {3,4,4,4,5,5};
  int n = 6;
  missingno(arr,n);
}