#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** finding missing number in an array using hashing type technique*/////////////
   int n,*arr,i,res=0;
   cin>>n;
   arr=new int[n];
   for(i=1;i<n;i++)
    cin>>arr[i];
   for(i=1;i<n;i++)
    res=res^arr[i];
   for(i=1;i<=n;i++)
    res=res^i;
   cout<<res;

}
