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

struct Edge {
  int to;
  int cost;
};

long dicstra (long s,long g,vector<vector<Edge>> e){
  vector<bool>visited(e.size()+1);
  priority_queue<vector<long>> q;
  q.push({0,s});
  while(q.size()>0){
    vector<long> now = q.top();
    q.pop();
    if(visited[now[1]]) continue;
    visited[now[1]] = true;
    if(now[1] == g)return -now[0]; 
    vector<Edge> path = e[now[1]];
    for(int i = 0; i < path.size();i++){
      q.push({-(-now[0]+path[i].cost),path[i].to});
    }
  }
  return -1; 
}

int main()
{
  long inf = 1<<30;
  long n,k;
  cin>>n>>k;
  vector<long>ans;
  vector<vector<Edge>> e(n+1);
  for(int i = 0; i < k;i++){
    long kind;
    cin>>kind;
    if(kind ==0){
      long s,g;
      cin>>s>>g;
      ans.push_back(dicstra(s,g,e));
    }
    else{
      long s,g,c;
      cin>>s>>g>>c;
      e[s].push_back({g,c});
      e[g].push_back({s,c});
    }
  }
  for(int i = 0; i < ans.size();i++)cout<<ans[i]<<"\n";
}