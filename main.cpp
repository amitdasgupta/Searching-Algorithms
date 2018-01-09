#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** find three numbers in an array whose sum is equal to k*/////////////
   int i,ni,*arr,j,k,q,flag=0,l,h,temp=0;
   cin>>ni>>k;
   arr=new int[ni];
   for(i=0;i<ni;i++)
   {
        cin>>arr[i];
   }
   sort(arr,arr+ni);
   cout<<"sorted array is:"<<endl;
   for(i=0;i<ni;i++)
   {
        cout<<arr[i];
   }
   cout<<"\n";
   for(i=0;i<ni-2&&!flag;i++)
   {
       l=i+1;
       h=ni-1;
       for(;l<h&&!flag;)
       {   temp=arr[i]+arr[l]+arr[h];
           if(temp==k)
           {
               flag=1;
           }
           else
           if(temp>k)
           {
               h--;
           }
           else
            l++;
    }

   }
   if(flag)
   cout<<"yes"<<i-1<< " "<<l<<" "<<h;
}
