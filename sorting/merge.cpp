#include<iostream>
#include<algorithm> 
using namespace std;

void merge(int a[], int b[], int m, int n){
  int c[m+n];
  for(int i = 0; i<m; i++)
    c[i] = a[i];
  for(int i = 0; i<n; i++)
    c[i+m] = b[i];
  sort(c,c+m+n);
  for(int i = 0; i<m+n; i++)
    cout<<c[i]<<" ";
}

int main(){
  int a[] = {10,15,20};
  int m = 3;
  int b[] = {5,6,6,15};
  int n = 4;
  merge(a,b,m,n);
}