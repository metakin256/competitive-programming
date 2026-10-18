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
    vector<long>a;
    ll sum = 0;
    vector<ll>sum_num,ans;
    sum_num.push_back(0);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < i+1;j++){
            sum+=a[j];
            sum_num.push_back(sum);
        }
    }
    for(int i = 0; i < q;i++){
        long l,r;
        cin>>l>>r;
        l--;
        ans.push_back(sum_num[r]-sum_num[l]);
    }
    for(int i = 0; i < q;i++){
        cout<<ans[i]<<"\n";
    }
}