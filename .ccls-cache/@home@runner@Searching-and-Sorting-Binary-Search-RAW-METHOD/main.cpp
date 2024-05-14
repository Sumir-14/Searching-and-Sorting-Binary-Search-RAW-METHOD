#include <iostream>
using namespace std;

int binarySearch(int arr[], int size,int target)
{
  int start = 0;
  int end= size-1;
  // int mid = (start+end)/2;
  int mid = start + (end-start)/2;

  while(start<=end)
    {
      int element = arr[mid];

      if(element==target)
      {
        return mid;
      }
      else if (target<element) 
      {
        end = mid-1;
      }
      else
      {
        start = mid+1;
      }
      // mid=(start+end)/2;
      mid = start + (end-start)/2;
    }
  return -1;
}

int main() {
  int arr[]={2,4,6,8,10,12,14,16,18,};
  int target ;
  cout<<"Enter the target element : ";
  cin>>target;
  int size = 10;
 
    int indexfound = binarySearch(arr,size,target);
    if(indexfound == -1)
    {
      cout<<"Target not found"<<endl;
    }
    else{
      cout<<"Target found at index "<<indexfound<<endl;
    }
  return 0;
}