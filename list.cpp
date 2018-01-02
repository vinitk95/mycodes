#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l,itr;
    int n;
    for(int i=0;i<7;i++)
    {
        cin>>n;
        l.push_front(n);
    }
    for(auto i:l)
    {
        cout<<i;
    }
    cout<<"\n";
    l.reverse();
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it;
    }

    return 0;
}
