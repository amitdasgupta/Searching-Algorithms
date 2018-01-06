#include <iostream>
using namespace std;
int checkDupliacte(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            return -1;
        arr[i]=-arr[i];
    }
    return 0;
}
int main()
{
    /***************efficient algo for finding duplicate in an array*///////////
    int n,*arr;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
     if(checkDupliacte(arr,n)==-1)
        cout<<"Yes duplicate exist";
    else
        cout<<"No duplicate exist";

}
