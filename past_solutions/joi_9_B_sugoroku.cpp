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
    long n,m;
    cin>>n>>m;
    vector<long> point;
    vector<long> move;
    for(int i = 0; i < n; i++){
        long num;
        cin>>num;
        point.push_back(num);
    }
    for(int i = 0; i < m;i++){
        long num;
        cin>>num;
        move.push_back(num);
    }
    long now = 0;
    for(int i = 0; i < m;i++){
        now += move[i];
        if(now <= n-1){
            now += point[now];
        }
        if(now >= n-1){
            cout<<i+1<<"\n";
            break;
        }
    }
}