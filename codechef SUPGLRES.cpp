#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[100005];
    int countt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i+=2)
    {
        if(a[i]<a[i+1])
        {
            countt++;
        }
    }
    if(countt==(n/2))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
