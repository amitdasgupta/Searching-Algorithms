#include <iostream>
#include<map>
#include<stdlib.h>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
/***************used it to avoid overflow*/////////////////////
unsigned int absu(int value) {
    return (value < 0) ? -((unsigned int)value) : (unsigned int)value;
}
int main()
{
   /***************** find three numbers in an array whose sum is closest to zero*/////////////
   int i,ni,*arr,j,k,q,flag=0,l,h,temp=0,positive=INT_MAX,negative=INT_MIN;
   cin>>ni;
   arr=new int[ni];
   for(i=0;i<ni;i++)
   {
        cin>>arr[i];
   }
   sort(arr,arr+ni);
   cout<<"sorted array is:"<<endl;
   for(i=0;i<ni;i++)
   {
        cout<<arr[i]<<" ";
   }
   cout<<"\n";
   for(i=0;i<ni-2&&!flag;i++)
   {
       l=i+1;
       h=ni-1;
       for(;l<h&&!flag;)
       {
           //cout<<positive<<" "<<negative<<endl;
            temp=arr[i]+arr[l]+arr[h];
           if(temp>0)
           {
               if(temp<positive)
                positive=temp;
               h--;
           }
           else
           if(temp<0)
           {
               if(temp>negative)
                negative=temp;
               l++;
           }
           else
           {
               positive=0;
               negative=0;
               flag=1;
           }
    }

   }

   (absu(positive<absu(negative)))?cout<<positive:cout<<negative;
}
