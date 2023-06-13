#include<iostream>
using namespace std;

const int n = 4;
void rotateBy90(int mat[n][n]){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<i; j++){
      swap(mat[i][j], mat[j][i]);
    }
  }
  for(int i = 0; i<=n-2; i++){
    for(int j = 0; j<n; j++){
      swap(mat[i][j], mat[n-1-i][j]);
    }
  }
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int mat[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  rotateBy90(mat);
}