#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,val;
    int index=-1;
    int a[1000];
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
    cin>>val;

    i=0;
    j=n-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]<val)
        {
            i=mid+1;
        }
        if(a[mid]==val)
        {

            index=mid;
            break;
        }
        else
            if(a[mid]>val)
        {
            j=mid-1;
        }
    }
    cout<<index;
    return 0;
}
