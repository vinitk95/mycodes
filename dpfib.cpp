#include<iostream>
using namespace std;
int fib(int n)
{
     if(n==0 || n==1)
     {
          //dp[n]=n;
          return n;
     }
     return fib(n-1)+fib(n-2);
}
int topdowndp(int n,int *dp)
{
     if(n==0||n==1)
     {
          dp[n]=n;
          return n;
     }
     if(dp[n]!=-1)
     {
          return dp[n];
     }
     else
     {
          dp[n]=topdowndp(n-1,dp)+topdowndp(n-2,dp);
          return dp[n];
     }
}
int main()
{
     int dp[100];
     for(int i=0;i<6;i++)
     {
          dp[i]=-1;
     }
     cout<<topdowndp(5,dp);
     return 0;
}
