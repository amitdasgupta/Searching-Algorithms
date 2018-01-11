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
/************binary search code to print last occurence of a number
int binarySearch(int *arr,int start,int last,int data)
{

    if(start>last)
    {
     return INT_MIN;
    }
    else
    {
        int mid=(start+last)/2;
        if(arr[mid]==data)
        return max(mid,binarySearch(arr,mid+1,last,data));
        else
            if(arr[mid]<data)
            return binarySearch(arr,mid+1,last,data);
            else
            return binarySearch(arr,start,mid-1,data);
    }
}
*////////////
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
int findSecondLrgestNumberArray(int *arr,int n)
{
    int first=INT_MAX,second=INT_MAX,third=INT_MAX;
    for(int i=0;i<n;i++)
    {

        if(arr[i]<first)
            {
                third=second;
                second=first;
                first=arr[i];
            }
        else
            if(arr[i]<second&&arr[i]!=first)
            {
                third=second;
                second=arr[i];
            }
            else
                if(arr[i]<third&&arr[i]!=first&&arr[i]!=second)
            {
                third=arr[i];
            }
    }
    return third;
}
int main()
{

   int n,*arr,i,data;
   cin>>n;
   arr=new int[n];
   for(i=0;i<n;i++)
    cin>>arr[i];
   cout<<findSecondLrgestNumberArray(arr,n);

   delete[] arr;
}
