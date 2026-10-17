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
    long n,m,d;
    cin>>n>>m>>d;
    vector<vector<long>> bored;
    for(int i = 0; i < n;i++){
        string s;
        cin>>s;
        bored.push_back(vector<long>());
        for(int j = 0; j < m;j++){
            if(s[j]=='#'){
                bored[i].push_back(1);
            }
            else{
                bored[i].push_back(0);
            }
        }
    }
    vector<long> data;
    for(int i = 0; i < n; i++){
        long now = 0;
        for(int j = 0; j < m;j++){
            if(bored[i][j]==1){
                if(now >= d){
                    data.push_back(now);
                }
                now = 0;
            }
            else{
                now++;
            }
            if(j == m-1){
                if(now >= d){
                    data.push_back(now);
                }
            }
        }
    }
    for(int i = 0; i < m; i++){
        long now = 0;
        for(int j = 0; j < n;j++){
            if(bored[j][i]==1){
                if(now >= d){
                    data.push_back(now);
                }
                now = 0;
            }
            else{
                now++;
            }
            if(j == n-1){
                if(now >= d){
                    data.push_back(now);
                }
            }
        }
    }
    long sum=0;
    for(int i = 0; i < data.size();i++){
        sum += data[i]-d+1;
    }
    cout<<sum<<"\n";
}