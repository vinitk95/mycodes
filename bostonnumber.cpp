#include<iostream>
#include<math.h>
using namespace std;
int findprimefactors(int num)
{
    int sum=0;
    while(num%2==0)
    {
        sum=sum+2;
        num/=2;
    }
    for(int i=3;i<=sqrt(num);i+=2)
    {
        while(num%i==0)
        {
            sum=sum+i;
            num/=i;
        }
    }
    if(num>2)
    {
        sum=sum+num;
    }
    return sum;
}
int main()
{
    int n,sumofdigits=0;
    cin>>n;
    int sumoffactors=findprimefactors(n);
    while(n!=0)
    {
        int b=n%10;
        sumofdigits=sumofdigits+b;
        n=n/10;

    }
    if(sumofdigits==sumoffactors)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}
