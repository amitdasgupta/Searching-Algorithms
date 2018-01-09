#include <iostream>
#include<map>
#include<stdlib.h>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
/***************** finding bitonic point in bitonic array if array is of infinite size or unknown size*/////////////

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
  /*     else
        if(arr[mid-1]>=arr[mid]&&arr[mid]>=arr[mid+1])
        return indexOfBitonicArray(arr,start,mid-1);*/
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
}
int main()
{
   int n,*arr,i;
   cin>>n;
   arr=new int[n];
   for(i=0;i<n;i++)
    cin>>arr[i];
   cout<<"bitonic index is:"<<infiniteBitonicHelp(arr,0,1);
   delete[] arr;
}
