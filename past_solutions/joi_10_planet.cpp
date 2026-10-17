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
  long h,w,k;
  cin>>h>>w>>k;
  vector<vector<long>>sum_j(h+1,vector<long>(w+1)),sum_o(h+1,vector<long>(w+1)),sum_i(h+1,vector<long>(w+1));
  for(int i = 0; i < h;i++){
    str s;
    cin>>s;
    for(int j = 0; j < w;j++){
      long num_j=0,num_o=0,num_i=0;
      if(s[j]=='J')num_j++;
      if(s[j]=='O')num_o++;
      if(s[j]=='I')num_i++;
      sum_j[i+1][j+1]=sum_j[i][j+1]+sum_j[i+1][j]-sum_j[i][j]+num_j;
      sum_o[i+1][j+1]=sum_o[i][j+1]+sum_o[i+1][j]-sum_o[i][j]+num_o;
      sum_i[i+1][j+1]=sum_i[i][j+1]+sum_i[i+1][j]-sum_i[i][j]+num_i;
    }
  }
  vector<vector<long>>answer;
  for(int i = 0; i < k;i++){
    long ans_j,ans_o,ans_i;
    long sx,sy,gx,gy;
    cin>>gx>>gy>>sx>>sy;
    gx--;gy--;
    ans_j = sum_j[sx][sy]+sum_j[gx][gy]-sum_j[gx][sy]-sum_j[sx][gy];
    ans_o = sum_o[sx][sy]+sum_o[gx][gy]-sum_o[gx][sy]-sum_o[sx][gy];
    ans_i = sum_i[sx][sy]+sum_i[gx][gy]-sum_i[gx][sy]-sum_i[sx][gy];
    answer.push_back({ans_j,ans_o,ans_i});
  }
  for(int i = 0; i < k;i++){
    cout<<answer[i][0]<<" "<<answer[i][1]<<" "<<answer[i][2]<<"\n";
  }
}