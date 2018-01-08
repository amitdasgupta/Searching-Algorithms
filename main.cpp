#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** given an array find two numbers in the array such that their sum is equal to k using hashing*/////////////
   int i,n,*arr,j,k;
   cin>>n>>k;
   arr=new int[n];
   map<int,int> map_;
   for(i=0;i<n;i++)
   {
        cin>>arr[i];
        map_.insert(pp(arr[i],i));
   }
   /*map<int,int>::iterator it=map_.begin();
   for(it;it!=map_.end();it++)
   {
       if(map)
   }*/
   for(i=0;i<n;i++)
   {
       if((map_.find(arr[i])!=map_.end())&&(map_.find(k-arr[i])!=map_.end()))
       {
           cout<<"yes "<<map_[arr[i]]<<" "<<map_[k-arr[i]];
           break;
       }
   }


}
