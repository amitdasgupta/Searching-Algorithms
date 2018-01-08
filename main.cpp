#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** finding number occuring odd number of times*/////////////
   int n,*arr,i,res=0;
   cin>>n;
   arr=new int[n];
   for(i=0;i<n;i++)
    {
        cin>>arr[i];
        res=res^arr[i];
    }
    cout<<res;
}
