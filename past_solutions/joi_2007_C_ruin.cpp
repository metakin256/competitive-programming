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
    long n;
    cin>>n;
    vector<vector<bool>>boerd;
    for(int i = 0; i < 5002;i++){
        boerd.push_back(vector<bool>(5002));
    }
    vector<vector<long>>dot;
    for(int i = 0; i < n;i++){
        long x,y;
        cin>>x>>y;
        boerd[x][y]=true;
        dot.push_back({x,y});
    }
    long answer=0;
    for(int i = 0; i < n-1;i++){
        for(int j = i+1; j < n;j++){
            long x_d = boerd[j][0]-boerd[i][0];
            long y_d = boerd[j][1]-boerd[i][1];
            if(boerd[boerd[i][0]+y_d][boerd[i][1]+x_d]&&boerd[boerd[j][0]+y_d][boerd[j][1]+x_d]){
                if(answer < x_d*x_d+y_d*y_d) answer = x_d*x_d+y_d*y_d;
            }
            if(boerd[boerd[i][0]-y_d][boerd[i][1]-x_d]&&boerd[boerd[j][0]-y_d][boerd[j][1]-x_d]){
                if(answer < x_d*x_d+y_d*y_d) answer=x_d*x_d+y_d*y_d;
            }
        }
    }
    cout<<answer;
}