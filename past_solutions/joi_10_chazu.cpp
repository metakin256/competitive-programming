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

vector<long>cx({0,1,0,-1});
vector<long>cy({1,0,-1,0});

bool check(long c,long m){
  if(0 <= c&&c<=m)return true;
  return false;
}

long bfs(pair<long,long>s,pair<long,long>g,vector<vector<long>>pass){
  long h = pass.size(),w=pass[0].size();
  queue<vector<long>>q;
  q.push({s.first,s.second,1});
  pass[s.first][s.second]=1;
  while(q.size()>0){
    vector<long>now = q.front();
    q.pop();
    for(int i = 0; i < 4;i++){
      long nx = now[0]+cx[i],ny = now[1]+cy[i];
      if(check(nx,h-1)&&check(ny,w-1)){
        if(pass[nx][ny]!=-1&&pass[nx][ny]== 0){
          pass[nx][ny]=now[2]+1;
          q.push({nx,ny,now[2]+1});
        }
      }
    }
  }
  return pass[g.first][g.second]-1;
}

int main()
{
  long h,w,n;
  cin>>h>>w>>n;
  vector<vector<long>>pass(h,vector<long>(w));
  map<long,pair<long,long>> dic;
  for(int i = 0; i < h;i++){
    str s;
    cin>>s;
    for(int j = 0; j < w;j++){
      if(s[j]=='X'){
        pass[i][j]=-1;
      }
      else if(s[j]=='.'){

      }
      else if(s[j]=='S'){
        dic[0]={i,j};
      }
      else{
        long number = s[j]-48;
        dic[number]={i,j};
      }
    }
  }
  long ans = 0;
  for(int i = 0; i < n;i++){
    ans+=bfs(dic[i],dic[i+1],pass);
  }
  cout<<ans<<"\n";
}