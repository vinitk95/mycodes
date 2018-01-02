#include<iostream>
#include<stack>
using namespace std;
void findjustnext(int *arr,int n)
{
    stack<int >s;
    int j=n-1;
    while(j>=0)
    {
        s.push(a[j]);
        j--;
    }

}
int main()
{
    int arr[]={5,7,6,2,3,2,5};
    findjustnext(arr,7);
    return 0;
}
