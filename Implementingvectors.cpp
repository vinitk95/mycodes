#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(12);
    v.push_back(113);
    v.reserve(100);
   cout<< v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<v.capacity();
    return 0;
}
