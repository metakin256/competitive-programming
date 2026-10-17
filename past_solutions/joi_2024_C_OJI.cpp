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
    long n;
    string s;
    cin>>n>>s;
    string ans = "";
    for(int i = 0; i < n;i++){
        if(s[i]=='J'){
            ans =ans+"O";
        }
        if(s[i]=='O'){
            ans =ans+"I";
        }
        if(s[i]=='I'){
            ans =ans+"J";
        }
    }
    cout<<ans;
}