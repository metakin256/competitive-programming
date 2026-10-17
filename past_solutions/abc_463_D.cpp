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

bool check(long a){
    if(0<= a&&a<5001)return true;
    return false;
}

int main()
{
    long n,k;
    cin>>n>>k;
    vector<pair<long,long>> sec;
    for(int i = 0; i < n;i++){
        long a,b;
        cin>>a>>b;
        sec.push_back({b,a});
    }
    sort(sec.begin(),sec.end());
    long now = 0;
    long ans = 1<<30;
    for(int i = 0; i < n;i++){
        if(sec[i].second>now){
            if(now!=0){
                ans = min(ans,sec[i].second-now);
            }
            now = sec[i].first;
        }
    }
    if(ans == 1<<30)ans = -1;
    cout<<ans;
}   