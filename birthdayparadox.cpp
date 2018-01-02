#include<iostream>
using namespace std;
int main()
{
    int days=365;
    float p=1;
    int num=365;
    int counts=0;
    float val;
    cin>>val;
    while(p>=1-val)
    {
        // minimum number of people required in
        //the room so that two have same birthday with probability greater than or equal to 'p'.
        p=p*(num/(1.0*days));
        num--;
        counts++;
    }
    cout<<counts;
}
