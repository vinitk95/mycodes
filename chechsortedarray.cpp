#include<iostream>
using namespace std;
int count=0;
bool checksort(int *a,int n)
{
    if(n==0)
    {
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            count++;
        }

    }
    checksort(a,n-1);
}
int main()
{
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<" ";
    }
    checksort(a,n);
    if(count!=0)
        cout<<"false";
    else
        cout<<"true";
    return 0;
}
