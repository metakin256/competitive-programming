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
    long h,w;
    cin>>h>>w;
    vector<vector<long>> boerd;
    vector<vector<bool>> visited;
    long answer = 0;
    queue<vector<long>> que;
    for(int i = 0; i < h;i++){
        string s;
        cin>>s;
        boerd.push_back(vector<long>());
        visited.push_back(vector<bool>());
        for(int j = 0; j < w;j++){
            if(s[j]=='#'){
                boerd[i].push_back(-1);
                visited[i].push_back(true);
                que.push({i,j,0});
            }
            else{
                boerd[i].push_back(0);
                visited[i].push_back(false);
            }
        }
    }
    vector<vector<long>> check({{1,0},{0,1},{-1,0},{0,-1}});
    while (que.size() > 0)
    {
        vector<long> now = que.front();
        long min = now[2];
        que.pop();
        for(int i = 0; i < 4;i++){
            long one = now[0]+check[i][0];
            long two = now[1]+ check[i][1];
            if(-1 < one&&one < h&&-1<two&&two<w){
                if(!visited[one][two]){
                visited[one][two]=true;
                que.push({one,two,min+1});
                if(min+1 > answer){
                    answer = min+1;
                }
            }
            }
        }
    }
    cout<<answer<<"\n";
}