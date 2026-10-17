//いったんパス
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

vector<long> cx({0,1,0,-1});
vector<long> cy({1,0,-1,0});

bool check (long num,long max){
  if(0<=num&&num<max)return true;
  return false;
}
long dfs(long sx,long sy,vector<vector<bool>> vis,long count){
  vis[sx][sy]=true;
  long ans = 0;
  for(int i = 0; i < 4;i++){
    if(check(cx[i]+sx,vis.size())&&check(cy[i]+sy,vis[0].size())){
      if(!vis[cx[i]+sx][cy[i]+sy]){
        ans=max(ans,dfs(cx[i]+sx,cy[i]+sy,vis,count+1));
      }
    }
  }
  return ans+1;
}

int main()
{
  long n,m;
  cin>>n>>m;
  vector<vector<bool>> ice(m,vector<bool>(n,true));
  for(int i = 0; i < m;i++){
    for(int j = 0; j < n;j++){
      long num;
      cin>>num;
      if(num == 1)ice[i][j]=false;
    }
  }
  long ans = 0;
  for(int i = 0; i < m;i++){
    for(int j = 0; j < n;j++){
      if(!ice[i][j]){
        ans=max(ans,dfs(i,j,ice,1));
      }
    }
  }
  cout<<ans<<"\n";
}