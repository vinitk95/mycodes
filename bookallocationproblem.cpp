#include<iostream>
using namespace std;
bool isValidconfiguration(int *books,int n,int k,int ans)
{
    int students=1;
    int currentpages=0;
    for(int i=0;i<n;i++)
    {
        if(currentpages+books[i]>ans)
        {
            currentpages=books[i];
            students++;
            if(students>k)
            {
                return false;
            }
        }
        else
        {
            currentpages+=books[i];
        }
    }
    return true;
}
int binarysearchbooks(int *books,int n,int k)
{
    int totalpages=0;
    int s=0;
    int e=0;
    for(int i=0;i<n;i++)
    {
        totalpages+=books[i];
        s=max(s,books[i]);
    }
    e=totalpages;
    int finalans=s;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(isValidconfiguration(books,n,k,mid))
        {
            finalans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return finalans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int books[100005];
    for(int i=0;i<n;i++)
    {
        cin>>books[i];
    }
    cout<<binarysearchbooks(books,n,k)<<endl;
    return 0;
}
