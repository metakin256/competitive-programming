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
    pair<long,long>a,d;
    for(int i = 0; i < 2;i++){
        str s;
        cin>>s;
        for(int j = 0; j< 2;j++){
            if(s[j]=='A')a={i,j};
            if(s[j]=='D')d={i,j};
        }
    }
    if(abs(a.first-d.first)+abs(a.second-d.second)==1)cout<<"Yes";
    else cout<<"No";
}