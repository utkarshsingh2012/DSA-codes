#include<iostream>
using namespace std;

int intersection(int a[], int b[], int m, int n){
  int res = 0;
  for(int i = 0; i<m; i++){
    bool flag = false;
    for(int j = 0; j<i; j++){
      if(a[i] == a[j]){
        flag = true;
        break;
      }
    }
    if(flag == true){
      continue;
    }
    for(int j = 0; j<n;j++){
      if(a[i] == b[j]){
        res++;
        break;
      }
    }
  }
  return res;
}

int main(){
  int a[] = {10,10,10};
  int b[] = {10,10,10};
  int m = 3;
  int n = 3;
  cout<<intersection(a,b,m,n);
}