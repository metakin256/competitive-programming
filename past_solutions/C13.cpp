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
    ll n,p;
    cin>>n>>p;
    vector<ll>a;
    long mod = 1000000007;
    map<ll,long>dic;
    for(int i = 0; i < n;i++){
        ll num;
        cin>>num;
        num%=mod;
        a.push_back(num);
        dic[num]++;
    }
    long ans = 0;
    for(int i = 0; i < n;i++){
        if(p%a[i]==0){
            if(a[i]==1){
                ans--;
            }
        }
    }
    cout<<ans/2;
}   