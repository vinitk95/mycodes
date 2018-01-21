#include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[9000],n, i, val, diff;
while(1)
{
int max_load = 0, load = 0;
cin>>n;
if(n == -1)
break;
for(int i = 0;i<n;i++){
cin>>arr[i];
load += arr[i];
}
//If we cannot divide the load equally
if(load % n){
cout<<-1<<endl;
continue;
}
//Find the load that is to be divided equally
load /= n;
//Greedy step
for(int i = 0;i<n;i++){
//At each iteration, find the value
//of difference between final load to be assigned
//and current load
//Keep adding this difference in 'diff'
diff += (arr[i] - load);
//If the net difference is negative i.e.
//we need diff amount till i-th index
if(diff < 0)
max_load = max(max_load, -1*diff);
//If diff is positive i.e. we have to
//give diff amout to (n-i) processors
else
max_load = max(max_load, diff);
//calculate the max of load that can be givenor
//taken at each iteration
}
cout<<max_load<<endl;
}
return 0;
}
