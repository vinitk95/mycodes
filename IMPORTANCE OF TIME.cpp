#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int counts=0;
    int n,i,val;
    queue<int >q1;
    queue<int >q2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>val;
        q1.push(val);
    }
    for(i=0;i<n;i++)
    {
        cin>>val;
        q2.push(val);
    }
    while(!q1.empty() && !q2.empty())
    {
        if(q1.front()==q2.front())
        {
            q1.pop();
            q2.pop();
            counts++;
        }
        if(q1.front()!=q2.front())
        {
            int data=q1.front();
            q1.pop();
            counts++;
            q1.push(data);

        }
    }
    if(!q1.front())
    {
    cout<<counts;
    }
    return 0;
}
