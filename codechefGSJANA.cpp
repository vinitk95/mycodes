#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int k;
    long long int a[4];
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>k;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<4;i++)
        {
            if(k==a[i])
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
