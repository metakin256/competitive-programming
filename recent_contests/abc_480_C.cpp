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
    long n,k,t;
    cin>>n>>k>>t;
    vector<long>li,a;
    long last = 0;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < n;i++){
        if(a[i]>t)break;
        li.push_back(a[i]-last);
        last=a[i];
    }
    li.push_back(t-last);
    long ans = 0;
    long b = 1;
    if(li[0]==0)b=0;
    else{
        ans+=li[0]/k+1;
    }
    for(int i = b; i < (int)li.size();i++){
        if(li[i]>k){
            if(li[i]%k==0)ans+=(li[i]-k)/k;
            else ans+=(li[i]-k)/k+1;
        }
    }
    cout<<ans;
}