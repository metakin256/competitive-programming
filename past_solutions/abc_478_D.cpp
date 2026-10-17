//これもパス
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
#include <unordered_set>//ハッシュセットの使用に必要

using namespace std;

using ll = long long;
using str = string;

int main()
{
   long n,q;
   cin>>n>>q;
   vector<long>s(n),e(n);
   map<long,vector<pair<long,long>>> dic;
   vector<long>x_log;
   for(int i = 0; i < q;i++){
    long l,r,x;
    cin>>l>>r>>x;
    if(!dic.contains(x))x_log.push_back(x);
    dic[x].push_back({l,r});
   }
   long roop =dic.size();
   for(int i = 0; i < roop;i++){
    vector<pair<long,long>>now = dic[x_log[i]];
    sort(now.begin(),now.end());
    long number = 0,start = 0;
    bool flag = true;
    for(int j = 0; j < now.size();j++){
        flag = true;
        if(number>=now[j].first){
            number = max(number,now[j].second);
        }
        else{
            if(j == 0)flag = false;
            if(flag){
                s[start-1]++;
                e[number-1]++;
            }
            start = now[j].first;
            number = now[j].second;
        }
    }
    s[start-1]++;
    e[number-1]++;
   }
   long ans = 0;
   for(int i = 0; i < n;i++){
    ans+=s[i];
    cout<<ans<<" ";
    ans-=e[i];
   }
}