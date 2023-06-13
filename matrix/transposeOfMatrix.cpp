#include<iostream>
using namespace std;

const int n = 4;

void tranpose(int mat[n][n]){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<i; j++){
      swap(mat[j][i], mat[i][j]);
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
  tranpose(mat);
}