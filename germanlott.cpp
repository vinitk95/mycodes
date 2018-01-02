#include <iostream>
using namespace std;

int main() {

//        freopen("input2.txt","r",stdin);
//        freopen("output2.txt","w",stdout);

        int a[50],n;
        cin>>n;
        for(int i=0;i<n;i++)
        	cin>>a[i];

        for(int i=0;i<n-5;i++){

            for(int j=i+1;j<n-4;j++){

                for(int k=j+1;k<n-3;k++){

                    for(int l=k+1;l<n-2;l++){

                        for(int m = l+1;m<n-1;m++){

                            for(int o= m+1;o<n;o++){

                                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<a[l]<<" "<<a[m]<<" "<<a[o]<<endl;
                            }

                        }

                    }
                }
            }
        }
        return 0;


}
