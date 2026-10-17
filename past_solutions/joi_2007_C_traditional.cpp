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

bool check(long a){
    if(0<= a&&a<5001)return true;
    return false;
}

int main()
{
    long n;
    cin>>n;
    vector<vector<bool>>dic;
    for(int i = 0; i < 5001;i++){
        dic.push_back(vector<bool>(5001));
    }
    vector<vector<long>>point;
    for(int i = 0; i < n;i++){
        long a,b;
        cin>>a>>b;
        point.push_back({a,b});
        dic[a][b]=true;
    }
    long answer = 0;
    for(int i = 0; i < n-1;i++){
        for(int j = i+1;j < n;j++){
            long d_x=abs(point[i][0]-point[j][0]);
            long d_y=abs(point[i][1]-point[j][1]);
            if(check(point[i][0]+d_y)&&check(point[i][1]+d_x)&&check(point[j][0]+d_y)&&check(point[j][1]+d_x)){
                if(dic[point[i][0]+d_y][point[i][1]+d_x]&&dic[point[j][0]+d_y][point[j][1]+d_x])answer = max(answer,d_x*d_x+d_y*d_y);
            }
            if(check(point[i][0]-d_y)&&check(point[i][1]-d_x)&&check(point[j][0]-d_y)&&check(point[j][1]-d_x)){
                if(dic[point[i][0]-d_y][point[i][1]-d_x]&&dic[point[j][0]-d_y][point[j][1]-d_x])answer = max(answer,d_x*d_x+d_y*d_y);
            }
        }
    }
    cout<<answer<<"\n";
}   