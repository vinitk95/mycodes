#include<iostream>
using namespace std;
int count=0;
int findsetbits(int n)
{
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int setbits=findsetbits(n);
        cout<<setbits<<endl;
    }
    return 0;
}
