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
    long n,q;
    cin>>n>>q;
    vector<long>trans,ans;
    vector<long>p(n+1);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        p[num]=i;
        ans.push_back(num);
    }
    for(int i = 1;i < n+1;i++)trans.push_back(p[i]);
    long now = n;
    for(int i = 0; i < q;i++){
        long que;
        cin>>que;
        ans.push_back(que);
        trans[que-1]=now;
        now++;
    }
    sort(trans.begin(),trans.end());
    for(int i = 0;i<n;i++){
        cout<<ans[trans[i]]<<" ";
    }
}   