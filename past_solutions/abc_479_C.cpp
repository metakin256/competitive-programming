//これもパス
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
#include <unordered_set>//ハッシュセットの使用に必要

using namespace std;

using ll = long long;
using str = string;

int main()
{
    long n,w;
    cin>>n>>w;
    vector<vector<long>>li;
    for(int i = 0; i < n;i++){
        long a,b;
        cin>>a>>b;
        li.push_back({a,b});
    }
    long answer = 0;
    for(int i = 0; i < 1<<n;i++){
        long ans = 0;
        long wi=0;
        for(int j = 0; j < n;j++){
            if((i>>j)%2==1){
                ans+=li[j][0];
                wi+=li[j][1];
            }
        }
        if(w>=wi)answer = max(answer,ans);
    }
    cout<<answer;
}