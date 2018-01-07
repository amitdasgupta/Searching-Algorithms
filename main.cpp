#include <iostream>
#include<map>
#include<algorithm>
#define pp pair<int,int>
using namespace std;
int main()
{
   /***************** finding the first repeated number in array */////////////
   int *array_,n;
   cin>>n;
   map<int,int> map_;
   for(int i=0;i<n;i++)
    cin>>array_[i];
   for(int i=0;i<n;i++)
    {
        if(map_.find(array_[i])!=map_.end())
        {
            if(map_[array_[i]]<0)
                continue;
            else
                map_[array_[i]]=-map_[array_[i]];
        }
        else
            map_[array_[i]]=i+1;

    }
    map<int,int>::iterator it=map_.begin();
    int a,b=INT_MIN;
    for(it;it!=map_.end();it++)
    {
        cout<<"a";
        if(it->second<0)
        {
 if(it->second>b)
    {
        a=it->first;
        b=it->second;
    }
        }
    }
   cout<<a<< " "<<b;
}
