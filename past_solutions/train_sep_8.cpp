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
    long n,m,s,t;
    cin>>n>>m>>s>>t;
    if(s>t){
        long esc = t;
        t = s;
        s = esc;
    }
    long ans = 0;
    for(int i = 0; i < m;i++){
        long p,v;
        cin>>p>>v;
        if(s<=p&&p<=t){
            ans+=v;
        }
    }
    cout<<ans;
}   