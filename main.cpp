#include <iostream>
using namespace std;

int main()
{
   /*****************find maximum number of times elements occur in array*/////////////
   int *array_,n,k;
   cin>>n>>k;
   for(int i=0;i<n;i++)
        cin>>array_[i];
   for(int i=0;i<n;i++)
   {
       array_[array_[i]%k]+=k;
   }
   int max_=array_[0],index=0;
   for(int i=1;i<n;i++)
   {
       if(array_[i]>max_)
       {
           max_=array_[i];
           index=i;
       }

   }
   cout<<index;

}
