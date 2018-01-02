#include <iostream>
using namespace std;
int largestPower(int n, int p)
{
    int x = 0;

    while (n)
    {
        n /= p;
        x += n;
    }
    return x;
}

int main()
{
    int t,n,p;
    cin>>t;
    while(t--)
    {
    cin>>n>>p;
    cout<< largestPower(n, p)<<endl;
    }
    return 0;
}
