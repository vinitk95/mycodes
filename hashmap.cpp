#include<iostream>
#include<map>
#include<string.h>

using namespace std;
int main()
{
    map<string,int>m;
    m["mango"]=100;
    m.insert(make_pair("Apple",120));
    if(m.count("Apple")==1)
    {
        cout<<"price of apple is"<<m["Apple"]<<endl;
    }
    m["guava"]=m["mango"]+10;
    if(m.count("guava")==0)
    {
        cout<<"guava does not exists";
    }
    else
    {
        cout<<"cost of guava is "<<m["guava"];
    }
   auto f=m.find("mango");
    if(f!=m.end())
    {
        cout<<"price of mango is :"<<(f->second)<<endl;
    }
    else
    {
        cout<<"mango does not exists";
    }

    return 0;
}
