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
vector<vector<long>> matrix_vec(long a,long b){
    vector<vector<long>>test(a,vector<long>(b,0));
    return test;
}

int main()
{
    long n;
    cin>>n;
    vector<long>a,dp(n+1);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    long answer = 1;
    dp[1]=1;
    for(int i = 1; i < n;i++){
        long now = 1;
        for(int j = 0; j < i;j++){
            if(a[i]>a[j]){
                now = max(now,dp[j+1]+1);
            }
        }
        dp[i+1]=now;
        answer = max(answer,now);
    }
    cout<<answer<<"\n";
}   