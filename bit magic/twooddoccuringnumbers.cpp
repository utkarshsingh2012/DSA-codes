#include<iostream>
using namespace std;

void twiceodd(int arr[], int n){
  for(int i = 0; i<n; i++){
    int c = 0;
    for(int j = 0; j<n; j++){
      if(arr[i] == arr[j])
        c++;
    }
    if((c % 2) != 0)
      cout<<arr[i]<<endl;
  }
}

int main(){
  int arr[] = {3,4,3,4,5,4,4,6,7,7};
  int n = 10;
  twiceodd(arr,n);
}