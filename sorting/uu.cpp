#include<iostream>
using namespace std;

void unionOfArrays(int a[], int b[], int m, int n){
  int c[m+n];
  for(int i = 0; i<m; i++)
    c[i] = a[i];
  for(int i = 0; i<n; i++)
    c[m+i] = b[i];
  sort(c, c+m+n);
  for(int i = 0; i<m+n; i++)
  {
    if(i == 0 || c[i] != c[i-1])
      cout<<c[i]<<" ";
  }
}

int main(){
  int a[] = {20,20,20,40,60,70};
  int b[] = {2,20,20,20,20};
  int m = 6, n = 5;
  unionOfArrays(a,b,m,n);
}