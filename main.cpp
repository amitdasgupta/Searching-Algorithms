#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** given an array find two numbers in the array such that their sum is equal to k using hashing*/////////////
   int i,ni,*arr,j,k;
   cin>>ni;
   arr=new int[ni];
   for(i=0;i<ni;i++)
   {
        cin>>arr[i];
   }
   sort(arr,arr+ni);
   int p=INT_MAX,n=INT_MIN,temp;
   j=ni-1;
   i=0;
   for(;i<j;)
   {


       temp=arr[i]+arr[j];
       cout<<p<<" "<<n<<" "<<temp<<endl;
       if(temp>0)
       {
           if(temp<p)
            p=temp;
           j--;
       }
       else
        if(temp<0)
       {
           if(temp>n)
           {
             n=temp;
           }
           i++;
       }
       else
       {
           p=0;
           n=0;
           break;
       }
   }
   (abs(p)<abs(n))?cout<<abs(p):cout<<abs(n);



}
