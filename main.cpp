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
/*******************finding Nth largest element in an array in O(N) time
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
*/////////////
/****************brute force method to find majority element an array
int findMajorityElement(int *arr,int n)
{
    int i=0,value=0,count=0,j=0,max=INT_MIN;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count>max)
            {
                max=count;
                value=arr[i];
            }
    }
    cout<<"max times:"<<max<<endl;
    return value;
}
*/////////////////////
/******************find local minima in an array
int localMinima(int *arr,int start,int last)
{

        int mid=(last+start)/2;
        if((mid==0||arr[mid]<arr[mid-1])&&(mid==n-1||arr[mid]<arr[mid+1]))
           {
                return mid;
           }
        else
            if(arr[mid]>arr[mid-])
                return localMinima(arr,start,mid-1);
            else
                return localMinima(arr,mid+1,last);

}
*/////////////
/************Search in a row wise and column wise sorted matrix**/////////////
bool IsPresentInArray(int **arr,int n,int x)
{
    int i=0,j=n-1;
    while(i<n&&j>=0)
    {
        if(arr[i][j]==x)
        {
            break;
        }
        else
            if(arr[i][j]<x)
        {
            i++;
        }
        else
            if(arr[i][j]>x)
        {
            j--;
        }
    }
    if(i<n&&j>=0)
    {
        cout<<"element is found at"<<i<<" "<<j;
        return true;
    }
    else
        return false;
}
int main()
{

   int n,i=0,j=0,data;
   cin>>n;
   int **arr=new int*[n];
   for(int i=0;i<n;i++)
    arr[i]=new int[n]();
   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>arr[i][j];
    cout<<"\n enter element to be searched";
    cin>>data;
   if(IsPresentInArray(arr,n,data))
for(int i=0;i<n;i++)
    delete[] arr[i];
   delete[] arr;
}
