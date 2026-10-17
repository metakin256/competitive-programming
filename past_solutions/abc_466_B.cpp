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
    long n,m;
    cin>>n>>m;
    vector<long> color(m+1);
    for(int i = 0; i < n; i++){
        long c,s;
        cin>>c>>s;
        if(color[c] < s){
            color[c] = s;
        }
    }
    for(int i = 1; i < m+1;i++){
        long ans = color[i];
        if(ans ==0){
            ans = -1;
        }
        cout<<ans<<" ";
    }
}