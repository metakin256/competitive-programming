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
    long m,d;
    string s;
    cin>>m>>d>>s;
    vector<long>point;
    point.push_back(-d-1);
    for(int i = 0; i < m;i++){
        if(s[i]=='G'){
            point.push_back(i);
        }
    }
    point.push_back(m+d);
    long ans = 0;
    for(int i = 1; i < point.size();i++){
        long now = point[i] - point[i-1]-1;
        if(now > 2*d){
            ans += now - 2*d;
        }
    }
    cout<<ans;
}