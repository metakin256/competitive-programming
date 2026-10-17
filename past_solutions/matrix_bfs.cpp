#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>

using namespace std;

int main()
{
    long r,c;
    long sx,sy,gx,gy;
    cin>>r>>c
        >>sx>>sy
        >>gx>>gy;
    vector<vector<long>> labyrinth;
    vector<vector<bool>> visited;
    for(int i = 0; i < r;i++){
        string s;
        cin>>s;
        labyrinth.push_back(vector<long>());
        visited.push_back(vector<bool>());
        for(int j = 0; j < c;j++){
            if(s[j]=='#'){
                labyrinth[i].push_back(-1);
                visited[i].push_back(true);
            }
            else{
                labyrinth[i].push_back(0);
                visited[i].push_back(false);
            }
        }
    }
    visited[sx-1][sy-1]=true;
    queue<vector<long>>que;
    vector<vector<long>> check ({{1,0},{0,1},{-1,0},{0,-1}});
    que.push({sx-1,sy-1,0});
    while(que.size()>0){
        vector<long> now = que.front();
        long min = now[2];
        que.pop();
        for(int i = 0; i < 4;i++){
            if(!visited[now[0]+check[i][0]][now[1]+check[i][1]]){
                que.push({now[0]+check[i][0],now[1]+check[i][1],min+1});
                visited[now[0]+check[i][0]][now[1]+check[i][1]]= true;
                labyrinth[now[0]+check[i][0]][now[1]+check[i][1]]= min+1;
            }
        }
    }
    long answer = labyrinth[gx-1][gy-1];
    if(answer == 0){
        answer = -1;
    }
    cout<< answer <<"\n";
}