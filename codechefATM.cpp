#include<bits/stdc++.h>
using namespace std;
int main()
{
    int amount;
    float balance;
    cin>>amount;
    cin>>balance;
    if(amount>balance || amount%5!=0)
    {
        cout<<balance;
    }
    else
    {
        balance=balance-amount-0.5;
        cout<<balance;
    }
    return 0;
}
