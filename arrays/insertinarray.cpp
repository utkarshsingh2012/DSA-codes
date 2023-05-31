#include<iostream>
using namespace std;

int insert(int arr[], int n, int capacity,int pos, int x){
  if(n == capacity)
    return n;
  int index = pos -1;
  for(int i = n-1; i>=index; i--)
    arr[i+1] = arr[i]; //moving the elements which are ahead index a pos ahead
  arr[index] = x;
  return n+1;
}

int main(){
  int arr[5] = {5,10,20};
  int n = 3;
  int capacity = 5;
  int x = 7;
  int pos = 2;
  insert(arr,n,capacity,pos,x);
  insert(arr,n+1,capacity,2,12);
  for(int i = 0; i<capacity; i++)
    cout<<arr[i]<<" ";
}