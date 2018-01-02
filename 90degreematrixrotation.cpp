#include<iostream>
using namespace std;
void rotatematrix(int mat[900][900],int n)
{
    int sr=0;
    int er=n-1;
    //swap values of the matrix row wise
    while(sr<er)
    {
        for(int i=0;i<n;i++)
        {
            swap(mat[sr][i],mat[er][i]);
        }
        sr++;
        er--;
    }
    //tramspose the matrix
   /* for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }*/
}
int main()
{
    int n;
    cin>>n;
    int mat[900][900];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    rotatematrix(mat,n);
    cout<<endl;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
