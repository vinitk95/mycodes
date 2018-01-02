#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph
{
public:
    map<T,list<T>>l;
    Graph()
    {

    }
    void addEdge(T u,T v,bool bidir=true)
    {
        l[u].push_back(v);
        if(bidir==true)
        {
            l[v].push_back(u);
        }

    }
    void print()
    {
        for(auto i:l)
        {
                cout<<i.first<<"->";
                for(auto each:i.second)
                {
                    cout<<each<<",";
                }
        }

    }
};
int main()
{
    Graph<string>g;
    g.addEdge("modi","prabhu");
    g.print();
}
