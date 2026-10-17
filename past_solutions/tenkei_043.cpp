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

int main()
{
    long h,w,sx,sy,gx,gy;
    cin>>h>>w>>sx>>sy>>gx>>gy;
    sx--;
    sy--;
    gx--;
    gy--;
    vector<vector<long>> boerd;
    for(int i = 0; i < h;i++){
        str s;
        cin>>s;
        boerd.push_back(vector<long>());
        for(int j = 0; j < h;j++){
            if(s[j]=='#')boerd[i][j]==1;
        }
    }
    vector<long>cx({0,1,0,-1});
    vector<long>cy({1,0,-1,0});
    queue<vector<long>>q;
    q.push({sx,sy});
}