#include<iostream>
using namespace std;
int bubblesort(int *a,int size)
{
    if(size==0)
    {
        return 0;
    }
    for(int i=0;i<size-1;i++)
    {
        if(a[i]>a[i+1]){
        swap(a[i],a[i+1]);

        }

    }
    bubblesort(a,size-1);
}
int main()
{
    int a[]={4,3,2,6,8,99,2,45,1};
    bubblesort(a,9);
    for(int i=0;i<9;i++)
    {
        cout<<a[i]<<endl;
    }
}
