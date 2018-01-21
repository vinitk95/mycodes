#include<iostream>
using namespace std;
int maxsum(int *a,int n)
{
    int current_max=a[0];
    int max_so_far=a[0];
    for(int i=1;i<n;i++)
    {
        current_max=max(a[i],current_max+a[i]);
        max_so_far=max(max_so_far,current_max);

    }
    return max_so_far;
}
int main()
{
    int a[100005];
    int b[100005];
    int t,n,k;
    cin>>t;
    while(t--)
    {
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int l=n*k;
    int index=0;
    while(k--)
    {
        for(int i=0;i<n;i++)
        {
            a[index++]=b[i];

        }
    }
    cout<<"the maximum subarray sum is :"<<maxsum(a,l);
    cout<<endl;
    }return 0;
}
