#include<iostream>
using namespace std;
int main()
{
     int t;
     int n;
     int a[100005];
     cin>>t;
     while(t--)
     {
         int sum=0;
          int count=0;
          cin>>n;
          for(int i=0;i<n;i++)
          {
               cin>>a[i];
          }

          for(int i=0;i<n-1;i++)
          {
              for(int j=1;j<n;j++)
              {
                  if(a[i]%4==0)
                  {
                      a[i]=-1;
                  }
                  else
                  {
                      sum=a[i]+a[j];
                      if(sum%4==0)
                      {
                          a[i]=0;
                          a[j]=0;
                      }
                  }
              }

          }

          for(int i=0;i<n;i++)
          {

              if(a[i]==0 || a[i]==-1)
              {
                  count++;

              }
          }
          int countb=0;
          if(count==n)
          {

              for(int i=0;i<n;i++)
              {

                  if(a[i]==0)
                  {
                      countb++;
                  }
              }
              cout<<countb/2<<endl;
          }
          else{
            cout<<-1<<endl;
          }
     }
}
