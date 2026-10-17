#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include<stack>

using namespace std;

using ll = long long;
using str = string;

int main()
{
    long n,m;
    cin>>n>>m;
    vector<long>a,b;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    for(int i = 0; i < m;i++){
        long num;
        cin>>num;
        b.push_back(num);
    }
    sort(b.begin(),b.end());
    long ans = 0;
    for(int i = 0; i < n;i++){
        long l = -1,r = m;
        while(r-l>1){
            long mid = (l+r)/2;
            if(a[i]<=b[mid]){
                r=mid;
            }
            else{
                l =mid;
            }
        }
        ans+=(m-r);
    }
    cout<<ans;
}   