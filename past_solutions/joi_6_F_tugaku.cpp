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

int main()
{
    long a,b,q;
    cin>>a>>b>>q;
    vector<vector<long>> dp;
    for(int i = 0; i < b+1;i++){
        dp.push_back(vector<long>(a+1));
    }
    map<vector<long>,long> stop_point;
    for(int i = 0; i < q;i++){
        long x,y;
        cin>>x>>y;
        stop_point[vector<long>{x,y}]=0;
    }
    dp[0][1]=1;
    for(int i = 1; i < b+1; i++){
        for(int j = 1; j < a+1;j++){
            if(!stop_point.contains(vector<long>{j,i})){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
    }
    cout<<dp[b][a]<<"\n";
}