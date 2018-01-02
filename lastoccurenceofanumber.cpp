#include<iostream>
using namespace std;
int findfirstoccurence(int *a,int i,int j,int num)
{
    int ans;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]==num)
        {
            ans=mid;
            i=mid+1;
        }
        else
        if(a[mid]>num)
        {
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={1,2,2,2,2,2,5,6,7};
    cout<<findfirstoccurence(arr,0,8,2);
    return 0;
}

