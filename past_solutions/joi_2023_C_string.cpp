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
    char f = s[0];
    bool ans = true;
    for(int i = 0; i < n;i++){
        if(s[i]!=f){
            ans = false;
        }
    }
    if(ans){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}