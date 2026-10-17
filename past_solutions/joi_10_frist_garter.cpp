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
  long n;
  cin>>n;
  long goal;
  vector<long>a;
  for(int i = 0; i < n-1;i++){
    long num;
    cin>>num;
    a.push_back(num);
  }
  cin>>goal;
  vector<vector<ll>>dp(n+1,vector<ll>(21));
  dp[1][a[0]]=1;
  for(int i = 2; i < n;i++){
    long now = a[i-1];
    for(int j = 0; j < 21;j++){
      if(0<=j+now&&j+now<=20){
        dp[i][j+now]+=dp[i-1][j];
      }
      if(0<=j-now&&j-now<=20){
        dp[i][j-now]+=dp[i-1][j];
      }
    }
  }
  cout<<dp[n-1][goal]<<"\n";
}