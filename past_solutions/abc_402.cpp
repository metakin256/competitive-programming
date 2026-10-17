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
    vector<vector<long>>nums(n+1);
    for(int i = 0; i < m;i++){
        long k;
        cin>>k;
        for(int j = 0; j < k;j++){
            long a;
            cin>>a;
            nums[a].push_back(i+1);
        }
    }
    vector<long>q;
    for(int i = 0; i < n;i++){
        long b;
        cin>>b;
        q.push_back(b);
    }
    vector<bool> non_eat(m);
    vector<long> answer;
    answer.push_back(m);
    long count=0;
    for(int i = 0; i < n;i++){
        long now = q[n-i-1];
        vector<long> think = nums[now];
        for(int j = 0; j < think.size();j++){
            if(!non_eat[think[j]]){
                non_eat[think[j]]=true;
                count++;
            }
        }
        answer.push_back(m-count);
    }
    for(int i = 0; i < n; i++){
        cout<<answer[n-i-1]<<"\n";
    }
}