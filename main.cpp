#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** finding two repeating elements in the array*/////////////
   int n,size_,*arr,i,res=0;
   cin>>size_>>n;
   arr=new int[size_];
   for(i=1;i<=size_;i++)
    {
        cin>>arr[i];
        res=res^arr[i];
    }
   for(int i=1;i<=n;i++)
   {
       res=res^i;
   }
   int right_most_set_bit=(res)&~(res-1);
   int x=0,y=0;
   for(i=1;i<=size_;i++)
    {
        if(arr[i]&right_most_set_bit)
            x^=arr[i];
        else
            y^=arr[i];
    }
    cout<<x<<" "<<y;
}
