#include<iostream>
using namespace std;

int main()
{
    int  num, binary_val, decimal_val = 0, base = 1, rem;
    cin>>num;
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
     cout<<decimal_val;
    return 0;
}
