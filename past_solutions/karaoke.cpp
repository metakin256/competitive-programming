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
    long n,m;
    cin>>n>>m;
    vector<vector<long>>a;
    for(int i = 0; i < n;i++){
        vector<long> inp;
        for(int j = 0; j < m;j++){
            long num;
            cin>>num;
            inp.push_back(num);
        }
        a.push_back(inp);
    }
    vector<vector<long>>all(n);
    for(int i = 0; i < n;i++){
        vector<long> nums;
        for(int j = 0; j < m-1;j++){
            for(int k = j+1;k < m;k++){
                nums.push_back(max(a[i][j],a[i][k]));
            }
        }
        all[i]=nums;
    }
    long answer=0;
    for(int i = 0; i < all[0].size();i++){
        long num=0;
        for(int j = 0; j < n;j++){
            num+=all[j][i];
        }
        answer=max(answer,num);
    }
    cout<<answer;
}   