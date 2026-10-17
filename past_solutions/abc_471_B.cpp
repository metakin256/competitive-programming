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
    long n;
    cin>>n;
    map<str,long> dic;
    long ans = 0;
    for(int i = 0; i < n;i++){
        str s,make;
        cin>>s;
        for(int j = 0; j < s.length();j++){
            if(s[j]>=97){
                make+=(s[j]-32);
            }
            else{
                make+=s[j];
            }
        }
        dic[make]++;
        ans=max(ans,dic[make]);
    }
    cout<<ans;
}   