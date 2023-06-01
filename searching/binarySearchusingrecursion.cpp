#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x){
  if(low>high)
    return -1;
  
  int mid = (low+high)/2;

  if(arr[mid] == x){
    return mid;
  }
  else if(arr[mid] > x){
    // high = mid-1;
    return binarySearch(arr, low,mid -1, x);
  }
  else if(arr[mid] < x)
  {
    // low = mid+1;
    return binarySearch(arr, mid+1,high, x);
  }
}

int main(){
  int arr[]={10,20,30,40,50,60};
  int n = 6;
  int x = 50;
  cout<<binarySearch(arr,0,5,70);
}