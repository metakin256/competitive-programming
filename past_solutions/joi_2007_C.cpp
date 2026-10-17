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
vector<vector<long>> matrix_vec(long a,long b){
    vector<vector<long>>test(a,vector<long>(b,0));
    return test;
}

int main()
{
    long w,h,x,y;
    cin>>w>>h>>x>>y;
    vector<vector<long>>sum_sc(h+1),sum_mi(h+1),a(h);
    for(int i = 0; i < h;i++){
        for(int j = 0; j < w;j++){
            long num;
            cin>>num;
            a[i].push_back(num);
        }
    }
    for(int i = 0;i < w+1;i++){
        sum_mi[0].push_back(0);
        sum_sc[0].push_back(0);
    }
    for(int i = 1; i < h+1;i++){
        sum_mi[i].push_back(0);
        sum_sc[i].push_back(0);
        for(int j = 1;j < w+1;j++){
            long now = 0;
            if(a[i-1][j-1]==-1){
                now++;
            }
            sum_mi[i].push_back(-sum_mi[i-1][j-1]+sum_mi[i][j-1]+sum_mi[i-1][j]+now);
            sum_sc[i].push_back(-sum_sc[i-1][j-1]+sum_sc[i][j-1]+sum_sc[i-1][j]+a[i-1][j-1]);
        }
    }
    long answer = 1<<30;
    for(int i = y; i < h+1;i++){
        for(int j = x;j < w+1;j++){
            if(sum_mi[i][j]-sum_mi[i-y][j]-sum_mi[i][j-x]+sum_mi[i-y][j-x]==0){
                answer=min(answer,sum_sc[i][j]-sum_sc[i-y][j]-sum_sc[i][j-x]+sum_sc[i-y][j-x]);
            }
        }
    }
    cout<<answer<<"\n";
    
}   