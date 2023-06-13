#include<iostream>
#include<unordered_set>
using namespace std;

int intersectingElements(int a[], int b[], int m, int n){
  int m1, n1, n2;
  unordered_set<int> p;
  unordered_set<int> q;
  for(int i = 0; i<m; i++){
    p.insert(a[i]);
    m1 = p.size();
  }
  for(int i = 0; i<n; i++){
    q.insert(b[i]);
    n1 = q.size();
  }

  for(int i = 0; i<n; i++){
    p.insert(b[i]);
    n2 = p.size();
  }

  return (m1+n1 - n2);
}

int main(){
  int a[] = {10,15,20,15,30,30,5};
  int b[] = {30,5,30,80};
  int m = 7;
  int n = 4;
  cout<<intersectingElements(a,b,m,n);
}