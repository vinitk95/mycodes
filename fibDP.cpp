#include<iostream>
using namespace std;
int fib(int num)
{
    if(num==0 || num==1)
    {
        return num;
    }

    int result=fib(num-1)+fib(num-2);
    return result;
}
int fibdp(int *a,int n)
{
    if(n==0 || n==1)
    {
        a[n]==n;
        return n;
    }
    if(a[n]!=-1)
    {
        return a[n];
    }
    else
    {
      //  cout<<"why not printing";
        a[n]=fibdp(a,n-1)+fibdp(a,n-2);

    }
return a[n];

}
int main()
{
    int a[100];
    for(int i=0;i<6;i++)
    {
        a[i]=-1;
    }
    cout<<"factorial from recursion:";
    cout<<fib(5);
    cout<<endl;
    cout<<"factorial from dynamic programming:";
    cout<<fibdp(a,5);
    return 0;
}
