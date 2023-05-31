#include<iostream>
using namespace std;

int getLargestElement(int arr[], int n)
{
  int res = 0;
  for(int i = 1; i < n; i++)
    {
      if(arr[i] > arr[res])
        res = i;
    }
  return res;
}

int main(){
  int arr[] = {10,5,20,8,52};
  int n = 5;
  cout<<getLargestElement(arr, n);
}