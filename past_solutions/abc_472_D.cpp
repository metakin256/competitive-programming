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
    long h,w,k;
    cin>>h>>w>>k;
    set<long>x,y;
    long answer = 0;
    map<vector<long>,long>bomb;
    for(int i = 0; i < h;i++){
        str s;
        cin>>s;
        for(int j = 0; j < w;j++){
            if(s[j]=='#'){
                x.insert(i);
                y.insert(j);
                bomb[{i,j}]++;
            }
        }
    }
    map<vector<long>,long>visited;
    queue<vector<long>>q;
    for(int i = 0; i < h;i++){
        for(int j = 0; j < w;j++){
            if(!x.count(i)&&!y.count(j)){
                q.push({i,j,0});
                visited[{i,j}]++;
                answer++;
            }
        }
    }
    vector<long>x_c({0,1,0,-1});
    vector<long>y_c({1,0,-1,0});
    while(q.size()>0){
        vector<long> now = q.front();
        q.pop();
        for(int i = 0; i < 4;i++){
            if(0<=now[0]+x_c[i]&&now[0]+x_c[i]<h&&0<=now[1]+y_c[i]&&now[1]+y_c[i]<w){
                if(!visited.count({now[0]+x_c[i],now[1]+y_c[i]})&&now[2]+1<=k){
                    if(!bomb.count({now[0]+x_c[i],now[1]+y_c[i]})){
                        q.push({now[0]+x_c[i],now[1]+y_c[i],now[2]+1});
                        visited[{now[0]+x_c[i],now[1]+y_c[i]}]++;
                        answer++;
                    }
                }
            }
        }
    }
    cout<<answer;
}