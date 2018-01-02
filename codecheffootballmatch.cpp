#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[1000];
    int t;
    int counta;
    int countb;
    int countc;
    int n;
    cin>>t;
    while(t--)
    {
        counta=0;
        countb=0;
        countc=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {

            cin>>str[i];
        }
        sort(str,str+n);
        if(str[0]==str[n-1])
        {
            cout<<str[0]<<endl;
        }
        else
        {


        for(int i=0;i<n;i++)
        {
            if(str[i]==str[0])
            {
                counta++;
            }
            else
                if(str[i]==str[n-1])
            {
                countb++;
            }
            else{
                countc++;
            }
        }
        if(countc==0)
        {


        if(counta==countb)
        {
            cout<<"Draw"<<endl;
        }
        else
        {
            if(counta>countb)
            {
                cout<<str[0]<<endl;
            }
            else
                cout<<str[n-1]<<endl;
        }
        }
        }

    }
    return 0;
}
