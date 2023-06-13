#include<iostream>
#include<vector>
using namespace std;

void snakePattern(vector<vector<int> > &arr){
  for(int i = 0; i< arr.size(); i++){
    if(i%2 == 0){
      for(int j = 0; j<arr[i].size(); j++){
        cout<<arr[i][j]<<" ";
      }
    }
    else{
      for(int k = arr[i].size(); k>= 0; k--){
        cout<<arr[i][k]<<" ";
      }
    }
  }
}

int main(){
  int m = 4, n = 4;
  int k = 1;
  vector<vector<int> > arr;
  for(int i = 0; i<m; i++){
    vector<int> v;
    for(int j = 0; j<n;j++){
      v.push_back((4*i)+j+1);
    arr.push_back(v);
    }
  }
  for(int i = 0; i< m; i++){
    for(int j = 0; j<n; j++){
      cout<<arr[i][j]<<" ";
    }
  }
}