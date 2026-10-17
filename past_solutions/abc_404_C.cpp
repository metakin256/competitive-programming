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

int main()
{
    long n,m;
    cin>>n>>m;
    vector<vector<long>> dots(n);
    for(int i = 0; i < m;i++){
        long a,b;
        cin>>a>>b;
        dots[a-1].push_back(b-1);
        dots[b-1].push_back(a-1);
    }
    for(int i = 0; i < n;i++){
        if(dots[i].size()!=2){
            cout<<"No";
            return 0;
        }
    }
    queue<long>q;
    q.push(0);
    vector<bool>visited(n);
    visited[0]=true;
    while (q.size()>0){
        long now = q.front();
        q.pop();
        for(int i = 0; i < dots[now].size();i++){
            if(!visited[dots[now][i]]){
                q.push(dots[now][i]);
                visited[dots[now][i]]=true;
            }
        }
    }
    for(int i = 0; i < n;i++){
        if(!visited[i]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}