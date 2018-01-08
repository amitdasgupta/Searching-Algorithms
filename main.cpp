#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** given an array find two numbers in the array such that their sum is equal to k*/////////////
   int i,n,*arr,j,k;
   cin>>n>>k;
   arr=new int[n];
   for(i=0;i<n;i++)
    cin>>arr[i];
   sort(arr,arr+n);
   for(i=0,j=n-1;i<j;)
   {
       int sum=arr[i]+arr[j];
       if(sum==k)
       {
           cout<<"yes result found"<<i<<" "<<j;
           break;
       }
       else
        if(sum>k)
       {
           j--;
       }
       else
        i++;

   }

}
