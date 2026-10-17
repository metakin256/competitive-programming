#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int main()
{
    long n,m;
    cin>>n>>m;
    vector<vector<long>>path(n+1);
    queue<long> q;
    q.push(1);
    for(int i = 0; i < m;i++){
        long a,b;
        cin>>a>>b;
        path[a].push_back(b);
    }
    vector<bool> visited(n+1);
    visited[1]=true;
    long count = 1;
    while(q.size()>0){
        long now = q.front();
        q.pop();
        vector<long>think=path[now];
        for(int i = 0; i < think.size();i++){
            if(!visited[think[i]]){
                visited[think[i]]= true;
                q.push(think[i]);
                count++;
            }
        }
    }
    cout<<count;
}