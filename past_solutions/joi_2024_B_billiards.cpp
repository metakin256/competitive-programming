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
    long long n,x;
    cin>>n>>x;
    vector<long>a,p;
    queue<vector<long long>> q;
    vector<vector<long>>path(n);
    long long inf = (long long)1<<60;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    vector<long long> cost(n);
    for(int i = 0; i < n;i++){
        cost[i]=inf;
    }
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        p.push_back(num);
        if(num == -1){
            q.push({i,a[i]});
            cost[i]=a[i];
        }
        else{
            path[num-1].push_back(i);
        }
    }
    while(q.size()>0){
        vector<long long> now = q.front();
        q.pop();
        long long min = now[1];
        for(int i = 0; i < path[now[0]].size();i++){
            cost[path[now[0]][i]]=min+a[path[now[0]][i]];
            q.push({path[now[0]][i],min+a[path[now[0]][i]]});
        }
    }
    for(int i = 0; i < n;i++){
        if(cost[n-i-1]<=x){
            cout<<n-i;
            return 0;
        }
    }
    cout<<-1;
}