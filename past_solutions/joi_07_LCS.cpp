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
  str s,t;
  cin>>s>>t;
  long s_len = s.length(),t_len=t.length();
  long ans = 0;
  vector<long>dp(t_len+1,0);
  for(int i = 0;i < s_len;i++){
    for(int j = t_len; j >=1;j--){
      if(s[i]==t[j-1]){
        dp[j]=dp[j-1]+1;
        ans = max(ans,dp[j]);
      }
      else dp[j]=0;
    }
  }
  cout<<ans<<"\n";
}