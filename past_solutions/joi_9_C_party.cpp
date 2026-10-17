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

int main()
{
    long n,m;
    cin>>n>>m;
    vector<bool> visited(n+1);
    vector<vector<long>> path(n+1);
    for(int i = 0; i < m;i++){
       long a,b;
       cin>>a>>b;
       path[a].push_back(b);
       path[b].push_back(a);
    }
    queue<vector<long>>q;
    q.push(vector<long>({1,0}));
    visited[1] = true;
    long ans=0;
    while(q.size() >= 1){
        vector<long>now= q.front();
        q.pop();
        long min = now[1];
        for(int i = 0; i < path[now[0]].size();i++){
            if(!visited[path[now[0]][i]]){
                visited[path[now[0]][i]] = true;
                if(min+1 < 3){
                    q.push(vector<long>({path[now[0]][i],min+1}));
                    ans++;
                }
            }
        }
    }
    cout<<ans<<"\n";

}