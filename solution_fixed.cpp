#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <stack>
#include <deque>
#include <cmath>
#include <iomanip>
#include <tuple>
#include <climits>

using namespace std;
using ll = long long;

vector<long>cx({0,1,0,-1});
vector<long>cy({1,0,-1,0});

bool check(long t,long m){
    if(0<=t&&t<m)return true;
    return false;
}

long bfs(vector<vector<long>>boerd,pair<long,long>s,pair<long,long>g){
    vector<vector<bool>>vis(boerd.size(),vector<bool>(boerd[0].size()));
    queue<vector<long>>q;
    q.push({s.first,s.second,0});
    vis[s.first][s.second]=true;
    while(q.size()>0){
        vector<long>now = q.front();
        q.pop();
        for(int i = 0; i < 4;i++){
            long nx=now[0]+cx[i];
            long ny=now[1]+cy[i];
            if(check(nx,boerd.size())&&check(ny,boerd[0].size())&&boerd[nx][ny]!=-1&&!vis[nx][ny]){
                vis[nx][ny]=true;
                boerd[nx][ny]=now[2]+1;
                q.push({nx,ny,now[2]+1});
                if(nx==g.first&&ny==g.second){
                    return now[2]+1;
                }
            }
        }
    }
    return 0;
}

int main() {
    long h,w,n;
    cin>>h>>w>>n;
    map<long,pair<long,long>>dic;
    vector<vector<long>>boerd(h,vector<long>(w));
    for(int i = 0; i < h;i++){
        string s;
        cin>>s;
        for(int j = 0; j < w;j++){
            if(s[j]=='.'){
                boerd[i][j]=0;
            }
            else if(s[j]=='X'){
                boerd[i][j]=-1;
            }
            else if(s[j]=='S'){
                dic[0]={i,j};
                boerd[i][j]=0;
            }
            else{
                long index=s[j]-48;
                dic[index]={i,j};
                boerd[i][j]=0;
            }
        }
    }
    long ans = 0;
    for(int i = 0; i < n;i++){
        ans+=bfs(boerd,dic[i],dic[i+1]);
    }
    cout<<ans;
}
