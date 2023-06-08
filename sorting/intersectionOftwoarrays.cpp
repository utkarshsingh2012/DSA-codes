#include<iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n){
  int i = 0, j=0, k=0, key = 0;
  while(i<m && j<n){
    if(a[i]>b[j])
      j++;
    else if(a[i] < b[j])
      i++;
    else
    {
      if(key != a[i]){
        cout<<a[i]<<" ";
        key = a[i];
        i++;
        j++;
        k++;
      }
      else
      {
        i++;
        k++;
        j++;
      }
    }

  }
}

int main(){
  int a[] = {20,20,20,40,60,70};
  int b[] = {2,20,20,20,20};
  int m = 6, n = 5;
  intersection(a,b,m,n);
}