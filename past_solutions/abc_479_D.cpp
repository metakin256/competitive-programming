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
    vector<long>l,r,l_min,r_min;
    long min_num = 1<<30;
    for(int i = 0; i < n-1;i++){
        long num;
        cin>>num;
        l.push_back(num);
    }
    for(int i = 0; i < n-1;i++){
        min_num = min(min_num,l[n-1-i-1]);
        l_min.push_back(min_num);
    }
    min_num = 1<<30;
    for(int i = 0; i < n-1;i++){
        long num;
        cin>>num;
        r.push_back(num);
        min_num = min(num,min_num);
        r_min.push_back(min_num);
    }
    vector<pair<long,long>>table;
    for(int i = 0; i < n;i++){
        long left = 0;
        long right = 0;        
        if(i==0){
            right = r_min[i];
        }
        else if(i==n-1){
            left = l_min[0];
        }
        else{
            long number = r_min[i]+l_min[n-1-i-1];
            right = min(r[i],r_min[n-1-i-1]+l[i-1]);
            left = min(l[i-1],l_min[i]+r[i]);
        }
        table.push_back({left,right});
    }
    vector<long>ans;
    for(int i = 0; i < q;i++){
        long s,t;
        cin>>s>>t;
        s--;t--;
        long num = 0;
        if(s<t){
            num = table[s].second;
        }
        else{
            num = table[s].first;
        }
        ans.push_back(num);
    }
    for(int i = 0; i < q;i++){
        cout<<ans[i]<<"\n";
    }
}