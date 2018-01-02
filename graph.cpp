#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int >*l;
    public:
    Graph(int v)
    {
        V=v;
        //array of lijked list
        l=new list<int>[v];
    }
    void addEdge(int u,int v,bool bidir=true)
    {
        l[u].push_back(v);
        if(bidir)
        {
            l[v].push_back(u);
        }
    }
    void printAdjlist()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<"->";
            for(auto itr:l[i])
            {
                cout<<itr<<",";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(4,3);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.printAdjlist();
}