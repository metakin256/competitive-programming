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

int main()
{
    ll mod = 1000000000;
    ll n,k;
    cin>>n>>k;
    ll now = k;
    vector<long> nums;
    if(k > n){
        cout<<1;
    }
    else{
        for(int i = 0; i < k;i++){
            nums.push_back(1);
        }
        for(int i = k;i<n;i++){
            nums.push_back(now);
            now *= 2;
            now-=nums[i-k];
            now+= mod;
            now%=mod;
        }
        cout<<now;
    }
}