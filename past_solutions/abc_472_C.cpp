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
    ll n,m,k;
    cin>>n>>m>>k;
    ll now = 0;
    vector<ll>l;
    vector<bool>answer;
    for(int i = 0; i < n;i++){
        ll num;
        cin>>num;
        l.push_back(num);
    }
    vector<ll>sum_l;
    for(int i = 0; i < m;i++){
        if(now+l[i]<=k){
            now+=l[i];
            answer.push_back(true);
        }
        else{
            answer.push_back(false);
        }
        sum_l.push_back(now);
    }
    for(int i = m; i < n;i++){
        if(l[i]+sum_l[i-1]-sum_l[i-m]<=k){
            now+=l[i];
            answer.push_back(true);
        }
        else{
            answer.push_back(false);
        }
        sum_l.push_back(now);
    }
    for(int i = 0; i < n;i++){
        if(answer[i]){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
}