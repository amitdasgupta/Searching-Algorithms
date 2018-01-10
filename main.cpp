#include <iostream>
#include<map>
#include<stdlib.h>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
/**************given an array which is rotated many times find the index of any given element
int indexOfArray(int *arr,int start,int last)
{
    if(start==last)
        return INT_MIN;
    else
        if(last-start==1)
    {
        if(arr[start]>arr[last])
            return start;
        else return INT_MIN;
    }
    else
    {
        int mid=(start+last)/2;
        if(arr[mid+1]<arr[mid])
            return mid;
        else
            if(arr[mid-1]>arr[mid])
            return mid-1;
        else
        if(arr[start]<arr[mid]&&arr[mid]>arr[last])
        return indexOfArray(arr,mid+1,last);
        else
        if(arr[start]>arr[mid]&&arr[mid]<arr[last])
        return indexOfArray(arr,start,mid-1);
        else
            return INT_MIN;
    }
}
*/
/************binary search code to print first occurence of a number*////////////
int binarySearch(int *arr,int start,int last,int data)
{

    if(start>last)
    {
     return INT_MAX;
    }
    else
    {
        int mid=(start+last)/2;
        if(arr[mid]==data)
        return min(mid,binarySearch(arr,start,mid-1,data));
        else
            if(arr[mid]<data)
            return binarySearch(arr,mid+1,last,data);
            else
            return binarySearch(arr,start,mid-1,data);
    }
}
/***************** finding bitonic point in bitonic array if array is of infinite size or unknown size

int indexOfBitonicArray(int *arr,int start,int last)
{
    if(start==last)
        return start;
    else
        if(last-start==1)
    {
        if(arr[start]>arr[last])
            return start;
        else
        return last;
    }
    else
    {
        int mid=(last+start)/2;
       if(arr[mid-1]<=arr[mid]&&arr[mid]>arr[mid+1])
        return mid;
       else
        if(arr[mid-1]<=arr[mid]&&arr[mid]<=arr[mid+1]&&arr[mid]==1)
        return indexOfBitonicArray(arr,mid+1,last);
  //     else
    //    if(arr[mid-1]>=arr[mid]&&arr[mid]>=arr[mid+1])
      //  return indexOfBitonicArray(arr,start,mid-1);
        else
        return INT_MIN;
    }
}
int infiniteBitonicHelp(int *arr,int start,int last)
{
    while(arr[last]>=arr[start])
    {
        start=last;
        last=2*last;
    }
    cout<<start<<" "<<last;
    return indexOfBitonicArray(arr,start,last);
}*/////////
int main()
{

   int n,*arr,i,data;
   cin>>n;
   arr=new int[n];
   for(i=0;i<n;i++)
    cin>>arr[i];
   //cout<<"bitonic index is:"<<infiniteBitonicHelp(arr,0,1);
  /** int pivot=indexOfArray(arr,0,n-1);
   cout<<"\n enter data to be searched:";
   cin>>data;
   cout<<endl;
      if(binarySearch(arr,0,pivot,data)!=INT_MIN||binarySearch(arr,pivot+1,n-1,data)!=INT_MIN)
      {
          (binarySearch(arr,0,pivot,data)!=INT_MIN)?cout<<binarySearch(arr,0,pivot,data):cout<<binarySearch(arr,pivot+1,n-1,data);
      }
    */
   cout<<"\n enter data to be searched:";
   cin>>data;
   if(binarySearch(arr,0,n-1,data)==INT_MAX)
    cout<<"element does not exist";
   else
    cout<<binarySearch(arr,0,n-1,data);
   delete[] arr;
}
