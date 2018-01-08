#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** finding missing number in an array*/////////////
   int n,*arr,i,*arr2;
   cin>>n;
   arr=new int[n];
   arr2=new int[n+1]();
   for(i=1;i<n;i++)
    cin>>arr[i];
   for(i=1;i<n;i++)
    arr2[arr[i]]=1;
   for(i=1;i<=n;i++)
    if(!arr2[i])
   {
       cout<<i;
       break;
   }

}
