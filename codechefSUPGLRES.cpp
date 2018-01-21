#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int flag=0;
	for(int i=0;i<n/2;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a>b)
			{
				flag=1;
				break;
			}
	}
	if(flag==1)
		cout<<"No";
	else
		cout<<"Yes";
}
