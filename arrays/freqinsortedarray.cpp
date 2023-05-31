#include<iostream>
using namespace std;

void freq(int arr[], int n){
  for(int i = 0; i<n; i++){
    for(int j = i; j<n; j++){
      if(arr[i] != arr[j])
      {
        cout<<"freq of"<<arr[i]<<"="<<(j-i+1)<<endl;
      }
    }
  }
}

int main(){
  int arr[] = {10,10,10,25,30,30};
  int n = 6;
  freq(arr,n);
}