#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** finding missing number in an array*/////////////
   int n,*arr,i;
   cin>>n;
   arr=new int[n];
   for(i=1;i<n;i++)
    cin>>arr[i];
   int sum=0;
   for(int i=1;i<=n;i++)
    sum+=i;
   for(i=1;i<n;i++)
    sum-=arr[i];
   cout<<sum;


}
