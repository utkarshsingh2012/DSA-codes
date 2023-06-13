#include<iostream>
#include<unordered_set>
using namespace std;

int unionOfarrays(int a[], int b[], int m, int n){
  unordered_set<int> s;
  for(int i = 0; i<m; i++){
    s.insert(a[i]);
  }
  for(int i = 0; i<n; i++){
    s.insert(b[i]);
  }
  return s.size();
}

int main(){
  int a[] = {10,15,20,15,30,30,5};
  int b[] = {30,5,30,80};
  int m = 7;
  int n = 4;
  cout<<unionOfarrays(a,b,m,n);
}