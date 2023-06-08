#include<iostream>
using namespace std;

void unionOfArrays(int a[], int b[], int m, int n){
  int i = 0, j = 0;
  while(i<m && j<n){
    if(i>0 && a[i-1] == a[i])
    {
      i++;
      continue;
    }
    if(j>0 && b[j-1] == b[j]){
      j++;
      continue;
    }
    else if(a[i] < b[j]){
      cout<<a[i]<<" ";
      i++;
    }
    else if(a[i] == b[j]){
      cout<<a[i]<<" ";
      i++;
      j++;
    }
    else{
      cout<<b[j]<<" ";
      j++;
    }
  }
  while(i<m){
    if(i>0 && a[i-1] == a[i]){
      i++;
      continue;
    }
    else{
      cout<<a[i]<<" ";
      i++;
    }
  }
  while(j<n){
    if(j>0 && b[j-1] == b[j]){
      j++;
      continue;
    }
    else{
      cout<<b[j]<<" ";
      j++;
    }
  }
}

int main(){
  int a[] = {20,20,20,40,60,70};
  int b[] = {2,20,20,20,20};
  int m = 6, n = 5;
  unionOfArrays(a,b,m,n);
}